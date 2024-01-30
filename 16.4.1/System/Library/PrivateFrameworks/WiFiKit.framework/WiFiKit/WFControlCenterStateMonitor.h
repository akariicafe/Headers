@interface WFControlCenterStateMonitor : WFWiFiStateMonitor

- (void)performAction;
- (BOOL)_isCellularOutrankingWiFi;
- (void)_promptCarPlayDisable;
- (BOOL)_airplaneModeEnabled;
- (void)performAction:(id /* block */)a0;
- (void)_performAction:(long long)a0;
- (void)_promptCellularOutankDisable;
- (void)_promptMISDisable;

@end
