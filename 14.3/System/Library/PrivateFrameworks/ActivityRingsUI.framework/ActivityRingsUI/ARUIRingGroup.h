@class NSArray, NSString, NSMutableDictionary, ARUISpriteSheet;
@protocol ARUIAnimationSequencing, ARUIRingGroupDelegate;

@interface ARUIRingGroup : NSObject <ARUIAnimationObserver, NSCopying> {
    NSMutableDictionary *_animations;
    BOOL _observingSequencing;
    id<ARUIAnimationSequencing> _animationSequencer;
}

@property (readonly, nonatomic) ARUIRingGroup *forWatch;
@property (readonly, nonatomic) ARUIRingGroup *forCompanion;
@property (readonly, nonatomic) ARUIRingGroup *withSpriteSheet;
@property (readonly, nonatomic) ARUIRingGroup *withWheelchairSpriteSheet;
@property (nonatomic) long long ringType;
@property (readonly, nonatomic) NSArray *rings;
@property (readonly, nonatomic) ARUISpriteSheet *spriteSheet;
@property (weak, nonatomic) id<ARUIRingGroupDelegate> delegate;
@property (nonatomic) float groupDiameter;
@property (nonatomic) float interspacing;
@property (nonatomic) BOOL paused;
@property (readonly, nonatomic) BOOL animating;
@property (nonatomic) float thickness;
@property (nonatomic) float opacity;
@property (nonatomic) float emptyOpacity;
@property (nonatomic) float trackOpacity;
@property (nonatomic) float scale;
@property (nonatomic) float zRotation;
@property (nonatomic) void /* unknown type, empty encoding */ translation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)animateWithDuration:(double)a0 animations:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)animateWithDuration:(double)a0 animations:(id /* block */)a1;
+ (id)activityRingGroup;
+ (void)animateWithDuration:(double)a0 animations:(id /* block */)a1 curve:(unsigned long long)a2 completion:(id /* block */)a3;
+ (id)_timingFunctionForCurve:(unsigned long long)a0;
+ (id)countdownRingGroup;
+ (id)activityRingGroupForRingType:(long long)a0;
+ (id)countdownRingGroupOnCompanion;
+ (unsigned long long)_numberOfRingsForRingType:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllAnimations;
- (void)setPercentage:(float)a0 ofRingAtIndex:(long long)a1 animated:(BOOL)a2;
- (id)initWithNumberOfRings:(long long)a0;
- (void)setTopColor:(id)a0 bottomColor:(id)a1 ofRingAtIndex:(long long)a2;
- (void)setActiveEnergyPercentage:(float)a0 animated:(BOOL)a1;
- (void)setExerciseMinutesPercentage:(float)a0 animated:(BOOL)a1;
- (void)setStandHoursPercentage:(float)a0 animated:(BOOL)a1;
- (void)setSpriteSheet:(id)a0;
- (void)playSpriteAnimation;
- (void)setActiveEnergyPercentage:(float)a0 exerciseMinutesPercentage:(float)a1 standHoursPercentage:(float)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)setPercentage:(float)a0 ofRingAtIndex:(unsigned long long)a1;
- (id)initWithNumberOfRings:(long long)a0 animationSequencer:(id)a1;
- (id)initWithRings:(id)a0 animationSequencer:(id)a1;
- (void)_setDefaultGroupValues:(id)a0;
- (void)_setupFloatAnimationForState:(id)a0 startValue:(float)a1 endValue:(float)a2 key:(id)a3 applier:(id /* block */)a4;
- (void)_updateRingGroupLayout;
- (void)_positionSprites;
- (void)_updateAnimationObserving;
- (void)_setupFloat2AnimationForState:(id)a0 startValue:(SEL)a1 endValue:(id)a2 key:(id)a3 applier:(id /* block */)a4;
- (void)setPercentage:(float)a0 ofRingAtIndex:(unsigned long long)a1 fromAnimation:(BOOL)a2;
- (void)_removeAnimationForKey:(id)a0;
- (void)playSpriteAnimationWithCompletion:(id /* block */)a0;
- (void)setFrame:(unsigned long long)a0 ofSpriteAtIndex:(unsigned long long)a1;
- (void)playCelebration:(id)a0 onRingAtIndex:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_setupUIntAnimationForState:(id)a0 startValue:(unsigned long long)a1 endValue:(unsigned long long)a2 key:(id)a3 applier:(id /* block */)a4;
- (BOOL)_shouldObserveSequencer;
- (void)animationSequencer:(id)a0 updatedWithTime:(double)a1;
- (void)playCelebration:(id)a0 onRingAtIndex:(unsigned long long)a1;
- (void)setPercentage:(float)a0 ofRingAtIndex:(long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (float)_ringPercentageAdjustedForProximityToFull:(float)a0 withRingDiameter:(float)a1 thickness:(float)a2;
- (double)_adjustedDurationForRingWithIndex:(long long)a0 startPercentage:(float)a1 targetPercentage:(float)a2 defaultDuration:(double)a3;
- (id)playingSpriteAnimation;

@end
