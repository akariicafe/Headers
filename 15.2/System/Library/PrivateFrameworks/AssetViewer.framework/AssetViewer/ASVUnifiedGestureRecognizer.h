@class NSString, NSTimer, NSMutableSet, ASVGesture, ASVGestureFeedbackGenerator;
@protocol ASVGestureDataSource, ASVUnifiedGestureRecognizerDelegate;

@interface ASVUnifiedGestureRecognizer : NSObject <ASVSingleFingerGestureDelegate, ASVTwoFingerGestureDelegate>

@property (nonatomic) double lastTapTime;
@property (nonatomic) void /* unknown type, empty encoding */ lastTapLocation;
@property (nonatomic) BOOL lastTapWasOnAsset;
@property (nonatomic) double lastFireFeedbackTime;
@property (retain, nonatomic) NSTimer *singleTapTimer;
@property (nonatomic) double startScaleAnimationTime;
@property (nonatomic) float animateScaleStart;
@property (nonatomic) float animateScaleEnd;
@property (retain, nonatomic) ASVGesture *currentGesture;
@property (retain, nonatomic) NSMutableSet *currentTouches;
@property (weak, nonatomic) id<ASVGestureDataSource> dataSource;
@property (weak, nonatomic) id<ASVUnifiedGestureRecognizerDelegate> delegate;
@property (retain, nonatomic) ASVGestureFeedbackGenerator *feedbackGenerator;
@property (readonly, nonatomic) BOOL isEnabled;
@property (nonatomic) unsigned long long enabledGestureTypes;
@property (readonly, nonatomic) BOOL isDecelerating;
@property (nonatomic) BOOL allowObjectScaling;
@property (nonatomic) float currentObjectScale;
@property (nonatomic) BOOL isScaleAnimating;
@property (readonly, nonatomic) float animatedScaleValue;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float minimumObjectScale;
@property (readonly, nonatomic) float maximumObjectScale;

- (void)cancelDeceleration;
- (void)update;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 feedbackGenerator:(id)a1;
- (void)gesture:(SEL)a0 singleTappedAtScreenPoint:(id)a1 onAsset:(BOOL)a2;
- (void)gestureBeganRotation:(id)a0;
- (void)gesture:(id)a0 rotatedAssetByDeltaYaw:(float)a1;
- (void)gestureEndedRotation:(id)a0;
- (void)gestureBeganScaling:(id)a0;
- (void)gesture:(id)a0 scaledAssetToScale:(float)a1;
- (void)gestureEndedScaling:(id)a0;
- (void)gestureDidSnapToScale:(id)a0;
- (void)gestureDidSnapAwayFromScale:(id)a0;
- (void)gestureStartScaleAnimationFrom:(float)a0 to:(float)a1;
- (void)gestureStopScaleAnimation;
- (id)singleFingerGestureForTouch:(id)a0 dataSource:(id)a1 enabledGestureTypes:(unsigned long long)a2;
- (id)twoFingerGestureForFirstTouch:(id)a0 secondTouch:(id)a1 dataSource:(id)a2;
- (float)clampedScaleForScale:(float)a0;
- (void)processTouches:(id)a0 phase:(long long)a1;
- (BOOL)gestureTypeIsEnabled:(unsigned long long)a0;
- (BOOL)generatesTaps;
- (BOOL)generatesTransforms;
- (BOOL)singleFingerGesturesEnabled;
- (BOOL)twoFingerGesturesEnabled;
- (void)startGestureFromTouches:(id)a0;
- (void)updateGestureFromTouches:(id)a0 phase:(long long)a1;

@end
