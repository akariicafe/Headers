@interface ATXNPlusOneStudyUploader : NSObject

- (id)_applyPrivacyFilterToEvents:(id)a0;
- (id)_emptyEventsForAllWidgetDescriptorsOnDeviceWithActivity:(id)a0;
- (id)_preparedEventsFromEmptyEvents:(id)a0 activity:(id)a1;
- (id)_preparedEvents_appLaunchPopularity:(id)a0 activity:(id)a1;
- (id)_preparedEvents_appPushNotificationEnabled:(id)a0 activity:(id)a1;
- (id)_preparedEvents_appScreenTimeCategory:(id)a0 activity:(id)a1;
- (id)_preparedEvents_numAppLaunches:(id)a0 activity:(id)a1;
- (id)_preparedEvents_suggestionCounts:(id)a0 activity:(id)a1;
- (id)_preparedEvents_widgetExistsOnScreen:(id)a0 activity:(id)a1;
- (BOOL)_processClientModelUpdateStreamFromStartTime:(double)a0 shortcutSuggestionHandler:(id /* block */)a1 infoSuggestionHandler:(id /* block */)a2 activity:(id)a3;
- (void)_sendEventsToCoreAnalytics:(id)a0;
- (void)dryRunResultFilterByExtensionBundleId:(id)a0 completionHandler:(id /* block */)a1;
- (void)uploadStudyDataToCoreAnalyticsWithActivity:(id)a0;

@end
