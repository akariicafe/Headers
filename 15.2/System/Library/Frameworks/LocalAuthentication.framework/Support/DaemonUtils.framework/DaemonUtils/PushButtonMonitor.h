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

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)_consumeDoubleTapWithReason:(id)a0 includingAX:(BOOL)a1;
- (double)_defaultExpirationTimeout;
- (void)_expireDoubleTap:(unsigned long long)a0;
- (void)_scheduleDoubleTapExpiration;
- (BOOL)_startWithError:(id *)a0;
- (void)_restartWithReactivationDelay:(double)a0;
- (id)prearmAssertion;
- (void)consumeDoubleTapWithReason:(id)a0;
- (void)doubleTappedAt:(id)a0;
- (void)axApplePayConfirmation;

@end
