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

- (id)messageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)engagementStatusOfActiveAndProminentAndMessageNotificationsSinceTimestamp:(double)a0;
- (void)updateDatabaseForNotificationEvent:(id)a0;
- (id)_timeBasedMergePublisher:(id)a0 withOtherPublishers:(id)a1;
- (id)mostRecentActiveNotifications;
- (id)numProminentActiveNotificationsPerBundleId;
- (id)appSortedByNumOfNotificationsSinceTimestamp:(double)a0;
- (id)currentActiveSuggestions;
- (id)getTopOfProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (id)allNotificationsBetweenStartTimestamp:(id)a0 endTimestamp:(id)a1 limit:(unsigned long long)a2;
- (id)_serializeBookmark:(id)a0;
- (id)totalNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)deleteAllData;
- (id)engagementStatusOfActiveAndProminentNotificationsSinceTimestamp:(double)a0;
- (id)feedbackHistoriesForKeys:(id)a0;
- (id)_suggestionInteractionEventPublisher;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1;
- (id)mergedInputEventStream;
- (id)_suggestionPublisher;
- (id)_fetchBookmarkFromDb;
- (void).cxx_destruct;
- (id)pruneSuggestionsBeforeTimestamp:(double)a0;
- (id)engagementStatusOfActiveAndProminentNotificationsWithUrgency:(long long)a0 sinceTimestamp:(double)a1;
- (id)init;
- (void)updateDatabase;
- (id)suggestionEventTypeShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (id)metricsForSuggestionsSinceCompletionTimestamp:(double)a0;
- (id)pruneNotificationsBeforeTimestamp:(double)a0;
- (id)vacuumDatabase;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1 notificationEventPublisher:(id)a2 suggestionPublisher:(id)a3 suggestionInteractionEventPublisher:(id)a4;
- (void)pruneDatabaseWithXPCActivity:(id)a0;
- (BOOL)hasUrgencyTuningSuggestionBeenShownForBundleId:(id)a0 sinceTimestamp:(double)a1;
- (id)resolutionsForNotifications:(id)a0;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0;
- (id)_notificationEventPublisher;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (id)numProminentActiveNotificationsPerThreadId;
- (double)receiveTimeStampOfFirstNotification;
- (id)_notificationGroupEventPublisher;
- (id)_notificationDeliveryEventPublisher;
- (id)telemetryDataForNotificationsFromTimestamp:(double)a0 endTimestamp:(double)a1;
- (id)getSmartPauseFeaturesForBundleIds:(id)a0 sinceTimestamp:(double)a1;
- (id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (BOOL)hasSuggestionBeenShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (void)updateDatabaseForEvent:(id)a0;
- (id)getTopOfNonProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1 notificationEventPublisher:(id)a2 suggestionPublisher:(id)a3 suggestionInteractionEventPublisher:(id)a4 notificationGroupEventPublisher:(id)a5;

@end
