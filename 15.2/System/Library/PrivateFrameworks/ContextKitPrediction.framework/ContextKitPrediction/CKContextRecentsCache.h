@class BPSSink, NSString, NSXPCConnection, BMUserFocusComputedModeStream, BMBiomeScheduler, BMUserActivityMetadataStream, NSObject;
@protocol OS_dispatch_queue, CKContextRecentsCacheDelegate, OS_os_transaction;

@interface CKContextRecentsCache : NSObject {
    BMUserActivityMetadataStream *_stream;
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSXPCConnection *_serviceConnection;
    id /* block */ _deferredMaintenanceTaskBlock;
    NSObject<OS_os_transaction> *_deferredMaintenanceTransaction;
    NSString *_latestActivity;
    unsigned long long _configuration;
    BMUserFocusComputedModeStream *_computedModeStream;
    NSObject<OS_dispatch_queue> *_computedFocusModeQueue;
    BMBiomeScheduler *_computedModeScheduler;
    BPSSink *_computedModeSink;
}

@property (weak, nonatomic) id<CKContextRecentsCacheDelegate> delegate;

- (id)_relativeDateStringForRecent:(id)a0;
- (void)_updateLatestFocusMode;
- (void)retrieveRecentsMatchingStrings:(id)a0 withReply:(id /* block */)a1;
- (unsigned long long)_maximumNumberOfItemsToRetrieve;
- (void)removeRecentWithUUID:(id)a0;
- (void)_scheduleDeferredMaintenanceTasks;
- (void)warm;
- (void)removeAllRecentsWithReply:(id /* block */)a0;
- (void)_performMaintenanceTasks;
- (id)_establishServiceConnectionIfNecessary;
- (void)pruneRecentsForBundleIdentifiers:(id)a0;
- (void)_registerComputedModeStream;
- (void)retrieveRecentsForPredictionWithReply:(id /* block */)a0;
- (id)initWithCacheConfiguration:(unsigned long long)a0;
- (void)_groupActivitiesByDateIntoSectionsWithRecents:(id)a0 limit:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)_groupActivitiesByModeIntoSectionsWithRecents:(id)a0 limit:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)_performMaintenanceTasksForRecents:(id)a0;
- (id)_associatedTopicTitlesForRecent:(id)a0;
- (BOOL)_recent:(id)a0 matchesKeywords:(id)a1;
- (void).cxx_destruct;
- (void)_groupActivitiesByConstellationIntoSectionsWithRecents:(id)a0 limit:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)retrieveRecentsBetweenStartDate:(id)a0 endDate:(id)a1 withReply:(id /* block */)a2;
- (id)_associatedTopicIdsForRecent:(id)a0;
- (void)removeRecentsMatchingRecent:(id)a0;
- (void)_groupActivitiesByAppIntoSectionsWithRecents:(id)a0 limit:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)_modeUUIDStringForComputedModeEvent:(id)a0;
- (void)_modeDidChangeToModeWithModeUUIDString:(id)a0;
- (BOOL)_constellationResult:(id)a0 intersectsWithRecent:(id)a1;
- (void)retrieveRecentsMatchingTopicIds:(id)a0 titles:(id)a1 withReply:(id /* block */)a2;
- (void)retrieveImageDataForRecentWithUUID:(id)a0 withReply:(id /* block */)a1;
- (void)dealloc;
- (void)_pruneLocalMetadataForRecents:(id)a0;
- (void)allRecentsWithReply:(id /* block */)a0;
- (void)retrieveRecentsMatchingMode:(id)a0 withReply:(id /* block */)a1;
- (void)retrieveRecentsCatalogWithStyle:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)insertUserActivityData:(id)a0 preferredTitle:(id)a1 bundleId:(id)a2 topics:(id)a3 hasAssociatedImageRepresentation:(BOOL)a4 uuid:(id)a5;
- (void)retrieveRecentsMatchingBundleIdentifier:(id)a0 withReply:(id /* block */)a1;
- (void)_pruneRecentsFromUnusedAppsForRecents:(id)a0;
- (void)retrieveRecentMatchingUUID:(id)a0 withReply:(id /* block */)a1;

@end
