@class NSTimer;

@interface MNTracePlayerETAUpdater : MNSessionUpdateManager {
    NSTimer *_delayTimer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleDelayTimerWithUpdateRow:(id)a0;
- (void)playETAUpdate:(id)a0;
- (void)startUpdateRequestsForRoutes:(id)a0 andNavigationType:(int)a1;
- (void)resumeUpdateRequests;

@end
