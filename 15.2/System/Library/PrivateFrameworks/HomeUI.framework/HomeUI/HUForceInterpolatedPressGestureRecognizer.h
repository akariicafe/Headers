@class NSMutableSet;

@interface HUForceInterpolatedPressGestureRecognizer : UILongPressGestureRecognizer

@property (readonly, nonatomic) NSMutableSet *hu_activeTouches;
@property (nonatomic) double currentSampleForceMultiplier;
@property (nonatomic) double currentSampleTimestamp;
@property (nonatomic) double overallForceMultiplierExcludingCurrentSample;
@property (nonatomic) double touchStartTime;
@property (readonly, nonatomic) double currentForceMultiplier;
@property (readonly, nonatomic) double overallForceMultiplier;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_resetForceSamples;
- (void)_logForceMultiplierSample;
- (double)_forceMultiplierIncludingCurrentSample;

@end
