@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog

@property (readonly, nonatomic) FBTransaction *transaction;

- (id)initWithTransaction:(id)a0;
- (void).cxx_destruct;
- (void)_watchdogTimerFired;
- (void)_dumpDebugInfo;
- (void)invalidate;

@end
