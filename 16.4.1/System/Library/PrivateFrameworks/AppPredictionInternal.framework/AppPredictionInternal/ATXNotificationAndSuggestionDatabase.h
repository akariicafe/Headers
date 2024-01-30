@class ATXNotificationManagementMAConstants;

@interface ATXNotificationAndSuggestionDatabase : ATXAbstractVersionedDatabase {
    ATXNotificationManagementMAConstants *_mobileAssetConstants;
}

- (BOOL)migrate;
- (id)totalNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)deleteAllData;
- (id)getBookmarkDataFromName:(id)a0;
- (void)setBookmarkData:(id)a0 forName:(id)a1;
- (struct ATXNotificationAndSuggestionDatastorePerfMetrics { long long x0; long long x1; })notificationAndSuggestionDatastorePerfMetrics;
- (id)appSortedByNumOfNotificationsSinceTimestamp:(double)a0;
- (id)pruneSuggestionsBeforeTimestamp:(double)a0;
- (void)updateSuggestionFromEvent:(id)a0;
- (id)currentActiveSuggestions;
- (id)engagementStatusOfActiveAndProminentNotificationsSinceTimestamp:(double)a0;
- (id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (id)getTopOfNonProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (id)notificationsReceivedPerBundleIdSinceDate:(id)a0;
- (id)feedbackHistoriesForKeys:(id)a0;
- (long long)latestVersion;
- (void)pruneNotificationsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (id)getSmartPauseFeaturesForBundleIds:(id)a0 sinceTimestamp:(double)a1 positiveEngagementEnums:(id)a2;
- (void)insertNotificationFromEvent:(id)a0 deliveryMethod:(long long)a1 modeIdentifier:(id)a2 deliveryReason:(id)a3;
- (id)messageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (BOOL)hasSuggestionBeenShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (void)_pruneNotificationsBasedOnHardLimitsForBundleId:(id)a0 XPCActivity:(id)a1;
- (void)insertSuggestion:(id)a0;
- (id)getTopOfProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (id)engagementStatusOfActiveAndProminentAndMessageNotificationsSinceTimestamp:(double)a0;
- (id)metricsForSuggestionsSinceCompletionTimestamp:(double)a0;
- (void)prepAndRunQuery:(id)a0 batchSize:(long long)a1 XPCActivity:(id)a2 onPrep:(id /* block */)a3 onRow:(id /* block */)a4 onError:(id /* block */)a5;
- (id)resolutionsForNotifications:(id)a0;
- (id)mostRecentActiveNotifications;
- (BOOL)_runMigrationSteps:(id)a0;
- (void)setAllNotificationsToModified;
- (id)_countNotificationsPerAppWithFilters:(id)a0 stmtBinder:(id /* block */)a1;
- (id)allNotificationsBetweenStartTimestamp:(id)a0 endTimestamp:(id)a1 limit:(unsigned long long)a2;
- (id)numProminentActiveNotificationsByGroupingColumn:(id)a0;
- (id)allNotificationsFromBundleId:(id)a0 sinceTimestamp:(double)a1;
- (id)engagementStatusOfActiveAndProminentNotificationsWithUrgency:(long long)a0 sinceTimestamp:(double)a1;
- (void)pruneSuggestionsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (id)init;
- (void)updateNotificationUIForNotifications:(id)a0 nextUI:(unsigned long long)a1;
- (void)updateNotificationFromEvent:(id)a0;
- (id)telemetryDataForNotificationsFromTimestamp:(double)a0 endTimestamp:(double)a1;
- (void)setAllNotificationsToClearedExceptProminent;
- (void)analyze;
- (void).cxx_destruct;
- (id)pruneNotificationsBeforeTimestamp:(double)a0;
- (double)receiveTimeStampOfFirstNotification;
- (id)suggestionEventTypeShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (id)vacuumDatabase;

@end
