@class ASVVelocitySample2D, NSString, ASVRubberBand, ASVDeceleration;
@protocol ASVTurntableGestureRecognizerDelegate;

@interface ASVTurntableGestureRecognizer : ASVUnifiedGestureRecognizer <ASVTurntableSingleFingerGestureDelegate, ASVTurntableTwoFingerGestureDelegate>

@property (nonatomic) void /* unknown type, empty encoding */ initialPanLocation;
@property (nonatomic) void /* unknown type, empty encoding */ lastPanLocation;
@property (nonatomic) double lastPanTime;
@property (nonatomic) float initialAssetPitch;
@property (nonatomic) float lastOverallDeltaX;
@property (nonatomic) float lastRubberBandedPitch;
@property (retain, nonatomic) ASVRubberBand *rubberBand;
@property (nonatomic) BOOL panThresholdPassed;
@property (nonatomic) BOOL yawThresholdPassed;
@property (nonatomic) void /* unknown type, empty encoding */ yawThresholdLocation;
@property (nonatomic) BOOL pitchThresholdPassed;
@property (nonatomic) void /* unknown type, empty encoding */ pitchThresholdLocation;
@property (retain, nonatomic) ASVVelocitySample2D *velocitySample;
@property (retain, nonatomic) ASVVelocitySample2D *previousVelocitySample;
@property (retain, nonatomic) ASVDeceleration *yawDeceleration;
@property (retain, nonatomic) ASVDeceleration *pitchDeceleration;
@property (readonly, nonatomic) float decelerationYawDelta;
@property (readonly, nonatomic) float decelerationPitchDelta;
@property (weak, nonatomic) id<ASVTurntableGestureRecognizerDelegate> turntableDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float minimumObjectScale;
@property (readonly, nonatomic) float maximumObjectScale;

- (void).cxx_destruct;
- (void)cancelDeceleration;
- (void)setEnabledGestureTypes:(unsigned long long)a0;
- (BOOL)isDecelerating;
- (id)singleFingerGestureForTouch:(id)a0 dataSource:(id)a1 enabledGestureTypes:(unsigned long long)a2;
- (id)twoFingerGestureForFirstTouch:(id)a0 secondTouch:(id)a1 dataSource:(id)a2;
- (float)clampedScaleForScale:(float)a0;
- (void)gesture:(SEL)a0 beganPanningAtScreenPoint:(id)a1;
- (void)gesture:(SEL)a0 pannedToScreenPoint:(id)a1;
- (void)gestureEndedPanning:(id)a0;
- (void)pitchRangeWithMinPitch:(float *)a0 maxPitch:(float *)a1;
- (void)startSpinningYawWithInitialVelocity:(float)a0;
- (void)startSnappingPitch;
- (void)startSpinningPitchWithInitialVelocity:(float)a0;
- (id)initWithTurntableDelegate:(id)a0 feedbackGenerator:(id)a1;

@end
