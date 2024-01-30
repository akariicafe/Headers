@interface SystemHealthUI : PSListController

- (int)getBatteryHealthServiceState;
- (id)getCurrentSystemHealthInfoSpecifiers;
- (id)checkCameraStatus;
- (void)getCAAForRepairHistory;
- (void)scheduleNetworkActivity;
- (void)sendAnalyticsForRepairHistoryMismatch;
- (BOOL)isVaildCAA:(id)a0;
- (void)retryCAA;
- (id)failedComponents;
- (id)valueForSpecifierUnknown;
- (id)valueForSpecifierRepaired:(id)a0;
- (id)valueForSpecifierPartIssue:(id)a0;
- (id)valueForSpecifierPartService:(id)a0;

@end
