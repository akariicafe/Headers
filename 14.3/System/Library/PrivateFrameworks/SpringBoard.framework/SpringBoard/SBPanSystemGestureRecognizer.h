@class NSTimer, BSMonotonicReferenceTime;
@protocol SBPanSystemGestureRecognizerDelegate;

@interface SBPanSystemGestureRecognizer : UIPanGestureRecognizer {
    BOOL _initialTouchReceived;
    BSMonotonicReferenceTime *_initialTouchReceivedReferenceTime;
}

@property (retain, nonatomic) NSTimer *noHysterisisCancellationTimer;
@property (weak, nonatomic) id<SBPanSystemGestureRecognizerDelegate> delegate;
@property (nonatomic) BOOL failsPastMaximumPressDurationWithoutHysteresis;
@property (nonatomic) double maximumPressDuration;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)setState:(long long)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)invalidateNoHysterisisCancellationTimer;
- (void)setupNoHysterisisCancellationTimerIfNeeded;

@end
