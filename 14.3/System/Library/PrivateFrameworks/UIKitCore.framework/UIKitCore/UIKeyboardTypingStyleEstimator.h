@class NSTimer;
@protocol UIKeyboardTypingStyleEstimatorDelegate;

@interface UIKeyboardTypingStyleEstimator : NSObject {
    NSTimer *_tapTypingFlipTimer;
    double _lastContinuousPathEvent;
    unsigned long long _currentTypingStyle;
}

@property (weak, nonatomic) id<UIKeyboardTypingStyleEstimatorDelegate> delegate;

- (unsigned long long)currentTypingStyleEstimation;
- (void).cxx_destruct;
- (void)tapTypedKey;
- (void)_setTypingStyleEstimation:(unsigned long long)a0;
- (void)endedContinuousPath;
- (void)beganContinuousPath;
- (void)cancelContinuousPath;

@end
