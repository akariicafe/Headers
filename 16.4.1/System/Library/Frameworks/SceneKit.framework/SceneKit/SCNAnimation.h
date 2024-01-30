@class NSString, NSArray, SCNTimingFunction, NSMutableDictionary;

@interface SCNAnimation : NSObject <SCNAnimation, NSCopying, NSSecureCoding> {
    struct __C3DAnimation { } *_animationRef;
    NSString *_keyPath;
    double _duration;
    double _repeatCount;
    double _timeOffset;
    double _beginTime;
    BOOL _autoreverses;
    BOOL _removedOnCompletion;
    BOOL _applyOnCompletion;
    BOOL _additive;
    BOOL _cumulative;
    BOOL _usesSceneTimeBase;
    BOOL _fillForward;
    BOOL _fillBackward;
    SCNTimingFunction *_timingFunction;
    NSArray *_animationEvents;
    double _fadeInDuration;
    double _fadeOutDuration;
    id /* block */ _animationDidStart;
    id /* block */ _animationDidStop;
    NSMutableDictionary *_userInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _userInfoLock;
    id _caAnimationCache;
    id _userAnimation;
    BOOL _didMutate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) SCNTimingFunction *timingFunction;
@property (nonatomic) double blendInDuration;
@property (nonatomic) double blendOutDuration;
@property (nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property (nonatomic, getter=isAppliedOnCompletion) BOOL appliedOnCompletion;
@property (nonatomic) double repeatCount;
@property (nonatomic) BOOL autoreverses;
@property (nonatomic) double startDelay;
@property (nonatomic) double timeOffset;
@property (nonatomic) BOOL fillsForward;
@property (nonatomic) BOOL fillsBackward;
@property (nonatomic) BOOL usesSceneTimeBase;
@property (copy, nonatomic) id /* block */ animationDidStart;
@property (copy, nonatomic) id /* block */ animationDidStop;
@property (copy, nonatomic) NSArray *animationEvents;
@property (nonatomic, getter=isAdditive) BOOL additive;
@property (nonatomic, getter=isCumulative) BOOL cumulative;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationNamed:(id)a0;
+ (id)animationFromScene:(id)a0;
+ (id)animationWithC3DAnimation:(struct __C3DAnimation { } *)a0;
+ (id)animationWithCAAnimation:(id)a0;
+ (id)animationWithContentsOfURL:(id)a0;
+ (id)animationWithMDLTransform:(id)a0;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (double)repeatDuration;
- (id)initWithCoder:(id)a0;
- (double)fadeOutDuration;
- (void)setRepeatDuration:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFadeInDuration:(double)a0;
- (void)dealloc;
- (double)fadeInDuration;
- (id)valueForUndefinedKey:(id)a0;
- (void)setFadeOutDuration:(double)a0;
- (id)subAnimations;
- (id)caAnimation;
- (void)_didMutate;
- (const void *)__CFObject;
- (void)_optimizeKeyframesWithTarget:(id)a0;
- (void)_setAnimationRef:(struct __C3DAnimation { } *)a0;
- (void)_syncObjCModel;
- (struct __C3DAnimation { } *)animationRef;
- (id)initWithC3DAnimation:(struct __C3DAnimation { } *)a0;
- (id)initWithCAAnimation:(id)a0;
- (void)prepareWithTarget:(id)a0 implicitDuration:(double)a1;
- (id)userAnimation;

@end
