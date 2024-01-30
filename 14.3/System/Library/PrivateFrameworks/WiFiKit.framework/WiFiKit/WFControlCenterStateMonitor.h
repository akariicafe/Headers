@interface WFControlCenterStateMonitor : WFWiFiStateMonitor

- (void)performAction;
- (void)performAction:(id /* block */)a0;
- (void)_performAction:(long long)a0;
- (void)_promptMISDisable;
- (void)_promptCarPlayDisable;
- (BOOL)_airplaneModeEnabled;

@end
