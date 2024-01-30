@class NSString, ATXNotificationAndSuggestionDatabase, BPSPublisher;
@protocol BMBookmark;

@interface ATXNotificationAndSuggestionDatastore : NSObject <ATXNotificationResolutionSourceProtocol, ATXNotificationQuantityProviderProtocol> {
    ATXNotificationAndSuggestionDatabase *_db;
    id<BMBookmark> _bookmark;
    BPSPublisher *_notificationEventPublisher;
    BPSPublisher *_suggestionPublisher;
    BPSPublisher *_suggestionInteractionEventPublisher;
    BPSPublisher *_notificationGroupEventPublisher;
    BPSPublisher *_notificationDeliveryEventPublisher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)numProminentActiveNotificationsPerBundleId;
- (id)totalNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (void)pruneDatabaseWithXPCActivity:(id)a0;
- (id)deleteAllData;
- (id)_timeBasedMergePublisher:(id)a0 withOtherPublishers:(id)a1;
- (id)_suggestionPublisher;
- (id)appSortedByNumOfNotificationsSinceTimestamp:(double)a0;
- (id)pruneSuggestionsBeforeTimestamp:(double)a0;
- (id)currentActiveSuggestions;
- (id)engagementStatusOfActiveAndProminentNotificationsSinceTimestamp:(double)a0;
- (id)_serializeBookmark:(id)a0;
- (id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (id)getTopOfNonProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (id)notificationsReceivedPerBundleIdSinceDate:(id)a0;
- (id)feedbackHistoriesForKeys:(id)a0;
- (BOOL)hasUrgencyTuningSuggestionBeenShownForBundleId:(id)a0 sinceTimestamp:(double)a1;
- (void)pruneNotificationsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1;
- (id)mergedInputEventStream;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1 notificationEventPublisher:(id)a2 suggestionPublisher:(id)a3 suggestionInteractionEventPublisher:(id)a4;
- (id)messageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)getSmartPauseFeaturesForBundleIds:(id)a0 sinceTimestamp:(double)a1;
- (BOOL)hasSuggestionBeenShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (void)notificationAndSuggestionDatastorePerfMetricsLogging;
- (id)_notificationEventPublisher;
- (id)_suggestionInteractionEventPublisher;
- (id)getTopOfProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (id)_notificationDeliveryEventPublisher;
- (id)engagementStatusOfActiveAndProminentAndMessageNotificationsSinceTimestamp:(double)a0;
- (id)metricsForSuggestionsSinceCompletionTimestamp:(double)a0;
- (id)numProminentActiveNotificationsPerThreadId;
- (id)resolutionsForNotifications:(id)a0;
- (id)_notificationGroupEventPublisher;
- (void)updateDatabaseForNotificationEvent:(id)a0;
- (id)mostRecentActiveNotifications;
- (id)allNotificationsBetweenStartTimestamp:(id)a0 endTimestamp:(id)a1 limit:(unsigned long long)a2;
- (id)allNotificationsFromBundleId:(id)a0 sinceTimestamp:(double)a1;
- (id)engagementStatusOfActiveAndProminentNotificationsWithUrgency:(long long)a0 sinceTimestamp:(double)a1;
- (void)pruneSuggestionsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (void)updateDatabase;
- (id)init;
- (id)telemetryDataForNotificationsFromTimestamp:(double)a0 endTimestamp:(double)a1;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1 notificationEventPublisher:(id)a2 suggestionPublisher:(id)a3 suggestionInteractionEventPublisher:(id)a4 notificationGroupEventPublisher:(id)a5;
- (void)analyze;
- (void).cxx_destruct;
- (id)pruneNotificationsBeforeTimestamp:(double)a0;
- (id)_fetchBookmarkFromDb;
- (double)receiveTimeStampOfFirstNotification;
- (id)suggestionEventTypeShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (id)vacuumDatabase;
- (void)updateDatabaseForEvent:(id)a0;

@end
