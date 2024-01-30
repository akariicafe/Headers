@class PPRecordMonitoringHelper, PPClientFeedbackHelper, NSDate;

@interface PPXPCNamedEntityStore : PPNamedEntityStore {
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
    NSDate *_lastCallDate;
}

- (BOOL)flushDonationsWithError:(id *)a0;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)namedEntityRecordsWithQuery:(id)a0 error:(id *)a1;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)cloudSyncWithError:(id *)a0;
- (BOOL)donateMapItem:(id)a0 forPlaceName:(id)a1 error:(id *)a2;
- (BOOL)removeMapItemsBeforeCutoffDate:(id)a0 error:(id *)a1;
- (id /* block */)_recordGenerator;
- (BOOL)iterNamedEntityRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)iterRankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)removeMapItemForPlaceName:(id)a0 error:(id *)a1;
- (id)_init;
- (BOOL)donateLocationNamedEntities:(id)a0 bundleId:(id)a1 groupId:(id)a2 error:(id *)a3;
- (id)mapItemForPlaceName:(id)a0 error:(id *)a1;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (void)_setLastCallDate;
- (void)_loadNamedEntityRecordsWithDelegate:(id)a0;
- (void)setClientIdentifier:(id)a0;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (void)_sendChangesToDelegates;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThan:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (void)_sendResetToAllDelegates;
- (BOOL)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)a0 error:(id *)a1;
- (id)_getLastCallDate;
- (id)rankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (BOOL)donateNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 sentimentScore:(double)a4 error:(id *)a5;

@end
