@interface ATXModeAppUsageManager : NSObject

- (id)_modeAppUsageDataFrom:(id)a0 toDate:(id)a1 duetHelper:(id)a2;
- (id)_modeStatsTupleFromModeStream:(id)a0;
- (id)_queryCDInteractionsOfMechanismTypes:(id)a0 withCDInteractionStore:(id)a1 from:(id)a2 to:(id)a3;
- (id)_populateInteractionDataByMode:(id)a0 withModeStream:(id)a1 andInteractionStream:(id)a2 andInteractionType:(id)a3;
- (id)_appsNamesForBundleIDs:(id)a0;
- (id)_allAppsInNotificationStream:(id)a0;
- (id)appUsageDataByModeFromStartDate:(id)a0 toEndDate:(id)a1 duetHelper:(id)a2;
- (id)_allAppsInAppUsageStream:(id)a0;
- (id)_mapNotificationIdToBundleId:(id)a0;
- (id)_dndUsageFromModeStream:(id)a0 andDNDUsageStream:(id)a1;
- (id)_appUsageStatsTupleFromModeStream:(id)a0 andAppUsageStream:(id)a1;
- (id)_notificationUsageDataFromModeStream:(id)a0 andNotificationUsageStream:(id)a1;
- (id)_formatModeStream:(id)a0;
- (id)_deviceUnlockActivityFromModeStream:(id)a0 andDeviceLockStream:(id)a1;
- (id)_calculateResponseTimeStatistics:(id)a0;
- (id)_appCategoriesForBundleIDs:(id)a0;
- (id)_peopleInteractionsFromModeStream:(id)a0;
- (id)_appCategoryFromBundleId:(id)a0;
- (BOOL)_findModeForEventStartDate:(id)a0 withModeStream:(id)a1 andCurrentModePointer:(unsigned long long *)a2;

@end
