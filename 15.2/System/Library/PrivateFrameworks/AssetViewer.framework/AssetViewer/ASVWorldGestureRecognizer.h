@class NSSet, ASVVelocitySample3D, NSString, ASVDeceleration;
@protocol ASVWorldGestureRecognizerDelegate;

@interface ASVWorldGestureRecognizer : ASVUnifiedGestureRecognizer <ASVWorldSingleFingerGestureDelegate, ASVWorldTwoFingerGestureDelegate>

@property (retain, nonatomic) ASVDeceleration *translationDeceleration;
@property (retain, nonatomic) ASVVelocitySample3D *translationVelocitySample;
@property (retain, nonatomic) ASVVelocitySample3D *translationLastVelocitySample;
@property (nonatomic) void /* unknown type, empty encoding */ normalizedVelocity;
@property (nonatomic) void /* unknown type, empty encoding */ lastTranslationLocation;
@property (nonatomic) double lastTranslationTime;
@property (weak, nonatomic) id<ASVWorldGestureRecognizerDelegate> worldDelegate;
@property (retain, nonatomic) NSSet *snapScalesSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float minimumObjectScale;
@property (readonly, nonatomic) float maximumObjectScale;

- (void)cancelDeceleration;
- (BOOL)isDecelerating;
- (BOOL)isActive;
- (void)update;
- (void).cxx_destruct;
- (void)setEnabledGestureTypes:(unsigned long long)a0;
- (void)updateDecelerationTranslation;
- (void)startTranslationDecelerationWithInitialVelocity:(SEL)a0;
- (void)gestureBeganTranslation:(id)a0;
- (void)gesture:(SEL)a0 translatedAssetToScreenPoint:(id)a1;
- (void)gestureEndedTranslation:(id)a0;
- (void)gestureBeganLevitation:(id)a0;
- (void)gesture:(SEL)a0 levitatedAssetToScreenPoint:(id)a1;
- (void)gestureEndedLevitation:(id)a0;
- (id)initWithWorldDelegate:(id)a0 feedbackGenerator:(id)a1;
- (id)singleFingerGestureForTouch:(id)a0 dataSource:(id)a1 enabledGestureTypes:(unsigned long long)a2;
- (id)twoFingerGestureForFirstTouch:(id)a0 secondTouch:(id)a1 dataSource:(id)a2;
- (float)clampedScaleForScale:(float)a0;

@end
