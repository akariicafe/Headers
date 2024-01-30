@class NSTimer;
@protocol UIKeyboardTypingStyleEstimatorDelegate;

@interface UIKeyboardTypingStyleEstimator : NSObject {
    NSTimer *_tapTypingFlipTimer;
    double _lastContinuousPathEvent;
    unsigned long long _currentTypingStyle;
}

@property (weak, nonatomic) id<UIKeyboardTypingStyleEstimatorDelegate> delegate;

- (void)_setTypingStyleEstimation:(unsigned long long)a0;
- (void)endedContinuousPath;
- (void)beganContinuousPath;
- (void).cxx_destruct;
- (unsigned long long)currentTypingStyleEstimation;
- (void)cancelContinuousPath;
- (void)tapTypedKey;

@end
