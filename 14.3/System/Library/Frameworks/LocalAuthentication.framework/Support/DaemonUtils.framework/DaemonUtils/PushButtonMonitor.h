@class SBSBiometricsService;
@protocol PushButtonDelegate;

@interface PushButtonMonitor : NSObject {
    unsigned long long _lastTap;
    unsigned long long _lastDoubleTap;
    id /* block */ _axDoubleTapExpirationBlock;
    SBSBiometricsService *_sbBiometricsService;
}

@property (nonatomic) BOOL doubleTapDetected;
@property (nonatomic) BOOL axDoubleTapDetected;
@property (weak, nonatomic) id<PushButtonDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)_consumeDoubleTapWithReason:(id)a0 includingAX:(BOOL)a1;
- (double)_defaultExpirationTimeout;
- (void)_expireDoubleTap:(unsigned long long)a0 delegate:(id)a1;
- (void)_consumeDoubleTap;
- (BOOL)_startWithError:(id *)a0;
- (void)_restartWithReactivationDelay:(double)a0;
- (id)prearmAssertion;
- (void)consumeDoubleTapWithReason:(id)a0;
- (void)doubleTappedAt:(id)a0;
- (void)axApplePayConfirmation;

@end
