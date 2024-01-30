@class BSAbsoluteMachTimer;

@interface BLSHWatchdogProvider : NSObject {
    BSAbsoluteMachTimer *_lock_fireRetryTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (getter=isWatchdogEnabled) BOOL watchdogEnabled;

+ (BOOL)checkForWatchdogDidFire:(BOOL)a0;
+ (void)markWatchdogDidFire:(id)a0 abortReason:(id)a1;
+ (void)resetWatchdogDidFire;
+ (void)showWatchdogDidFireAlert:(id)a0;

- (void)registerHandlersForService:(id)a0;
- (void)fireWatchdogWithTimer:(id)a0 delegate:(id)a1 timeout:(double)a2 elapsedTime:(double)a3;
- (void)dealloc;
- (id)scheduleWatchdogWithDelegate:(id)a0 explanation:(id)a1 timeout:(double)a2;
- (void)_fireWatchdogWithTimer:(id)a0 delegate:(id)a1 timeout:(double)a2 elapsedTime:(double)a3 abortContext:(id)a4 explanation:(id)a5 remainingRetries:(unsigned long long)a6;
- (id)init;
- (void)didDetectSignificantUserInteraction;
- (void)clearWatchdogWithExplanation:(id)a0 timeout:(double)a1 elapsedTime:(double)a2;
- (void).cxx_destruct;

@end
