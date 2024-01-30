@interface WFControlCenterStateMonitor : WFWiFiStateMonitor

- (void)performAction:(id /* block */)a0;
- (void)_performAction:(long long)a0;
- (void)_promptMISDisable;
- (BOOL)_airplaneModeEnabled;
- (BOOL)_isCellularOutrankingWiFi;
- (void)_promptCarPlayDisable;
- (void)performAction;
- (void)_promptCellularOutankDisable;

@end
