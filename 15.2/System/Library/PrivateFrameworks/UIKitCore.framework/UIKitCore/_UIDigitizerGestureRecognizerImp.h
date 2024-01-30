@class NSTimer;
@protocol _UIDigitizerGestureRecognizerImpDelegate;

@interface _UIDigitizerGestureRecognizerImp : NSObject

@property (weak, nonatomic) id<_UIDigitizerGestureRecognizerImpDelegate> delegate;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double maximumPressDuration;
@property (nonatomic) struct CGPoint { double x; double y; } digitizerLocation;
@property (nonatomic) long long numberOfActiveTouches;
@property (nonatomic) double pressEndToTouchBeginDuration;
@property (nonatomic) double touchEndToPressEndDuration;
@property (nonatomic) double touchEndTime;
@property (nonatomic) double pressBeginTime;
@property (nonatomic) double pressEndTime;
@property (nonatomic) double lastRecognitionTime;
@property (weak, nonatomic) NSTimer *minimumPressDurationTimer;
@property (weak, nonatomic) NSTimer *waitingForTouchesAfterPressTimer;

- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })defaultDigitizerLocation;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReportDigitizerLocation;
- (void)_minimumPressDurationTimerFired:(id)a0;
- (BOOL)_senderOfPressesHasTouchSurface:(id)a0 withEvent:(id)a1;
- (BOOL)_senderOfPressesIsSoftwareRemoteWithEvent:(id)a0;
- (void)_waitingForTouchesAfterPressTimerFired:(id)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;

@end
