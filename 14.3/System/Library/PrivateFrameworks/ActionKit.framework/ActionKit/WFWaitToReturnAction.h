@interface WFWaitToReturnAction : WFAction <WFApplicationStateObserver>

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)finishRunningWithError:(id)a0;

@end
