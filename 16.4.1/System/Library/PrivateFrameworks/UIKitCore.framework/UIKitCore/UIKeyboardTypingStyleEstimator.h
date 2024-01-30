@class NSTimer;
@protocol UIKeyboardTypingStyleEstimatorDelegate;

@interface UIKeyboardTypingStyleEstimator : NSObject {
    NSTimer *_tapTypingFlipTimer;
    double _lastContinuousPathEvent;
    unsigned long long _currentTypingStyle;
}

@property (weak, nonatomic) id<UIKeyboardTypingStyleEstimatorDelegate> delegate;

- (void)beganContinuousPath;
- (void)endedContinuousPath;
- (unsigned long long)currentTypingStyleEstimation;
- (void)tapTypedKey;
- (void)_setTypingStyleEstimation:(unsigned long long)a0;
- (void)cancelContinuousPath;
- (void).cxx_destruct;

@end
