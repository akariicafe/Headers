@class NSObject, PPNamedEntityStorage, NSCache, PPLocalContactStore, PPTrialWrapper, PPLocalTopicStore, _PASLock;
@protocol OS_dispatch_queue;

@interface PPLocalNamedEntityStore : PPNamedEntityStore <PPFeedbackProcessing> {
    _PASLock *_lock;
    PPLocalTopicStore *_topicStoreForNamedEntityMapping;
    PPLocalContactStore *_contactStoreForMapsFeedback;
    _Atomic BOOL _isCacheInvalidated;
    int _bundleIdBlocklistNotificationToken;
    NSObject<OS_dispatch_queue> *_mapsPrefetchQueue;
    NSCache *_modelCache;
    PPTrialWrapper *_trialWrapper;
}

@property (readonly, nonatomic) PPNamedEntityStorage *storage;

+ (void)sortAndTruncate:(id)a0 queryLimit:(unsigned long long)a1;
+ (id)recordsForNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2;
+ (float)resolvedPerRecordDecayRateForFeatureProvider:(id)a0 perRecordDecayRate:(float)a1;
+ (id)defaultStore;

- (BOOL)iterNamedEntityRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)processfeedbackItems:(id)a0 scoringDate:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4;
- (BOOL)removeMapItemForPlaceName:(id)a0 error:(id *)a1;
- (id)init;
- (id)_feedbackItemsByItemString:(id)a0;
- (id)_convertMapsContactFeedback:(id)a0;
- (id)_coalesceScoredNamedEntities:(id)a0;
- (BOOL)cloudSyncWithError:(id *)a0;
- (id)namedEntityToMatchedStringMappingForNamedEntities:(id)a0 timestamp:(double)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)namedEntityRecordsWithQuery:(id)a0 error:(id *)a1;
- (id)getScoredNamedEntityFeaturesWithNamedEntity:(id)a0 scoringDate:(id)a1 excludingSourceBundleId:(id)a2 decayRate:(double)a3 error:(id *)a4 strictFiltering:(BOOL)a5 scoreInterpreter:(id)a6;
- (id)mapItemForPlaceName:(id)a0 error:(id *)a1;
- (void)_registerMapsQueryPrefetching;
- (id)rankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)disableSyncForBundleIds:(id)a0;
- (BOOL)filterExistingNamedEntitiesWithShouldContinueBlock:(id /* block */)a0;
- (id)rankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1 clientProcessName:(id)a2;
- (id)_feedbackItemToNamedEntityMapForFeedback:(id)a0 error:(id *)a1;
- (BOOL)_shouldIgnoreHomeOrWorkAddress:(id)a0;
- (BOOL)_shouldUseScoringMLModel;
- (id)_loadScoreInterpreter;
- (BOOL)_shouldSuppressRepeatedImpressions:(id)a0;
- (id)scoredEntityFromRecords:(id)a0 scoringDate:(id)a1 perRecordDecayRate:(float)a2 decayRate:(float)a3 sourceStats:(id)a4 decayedFeedbackCounts:(id)a5 scoreInterpreter:(id)a6 streamingScorer:(id *)a7 mlModel:(id)a8;
- (double)finalScoreFromRecordsUsingHybrid:(id)a0 streamingScorer:(id)a1 mlModel:(id)a2;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)_donateLocationNamedEntityToLocationStore:(id)a0 source:(id)a1 locationAlgorithm:(unsigned short)a2 error:(id *)a3;
- (BOOL)_extractDonationsForFeedback:(id)a0 pbFeedbackLog:(id)a1 namedEntity:(id)a2 error:(id *)a3;
- (BOOL)_unlimitedNamedEntityRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)flushDonationsWithError:(id *)a0;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (void)_logDifferentiallyPrivateTaggerExtractions:(id)a0;
- (id)_defaultScoredEntityFromRecords:(id)a0 scoringDate:(id)a1 perRecordDecayRate:(float)a2 decayRate:(float)a3 sourceStats:(id)a4 decayedFeedbackCounts:(id)a5 scoreInterpreter:(id)a6 streamingScorer:(id *)a7;
- (void)_petLoggingForQuery:(id)a0 resultCount:(unsigned long long)a1 clientProcessName:(id)a2 hasError:(BOOL)a3;
- (BOOL)monitorNamedEntityRecordChangesWithError:(id *)a0 setup:(id /* block */)a1 handler:(id /* block */)a2 finish:(id /* block */)a3;
- (BOOL)removeMapItemsBeforeCutoffDate:(id)a0 error:(id *)a1;
- (id)_filterOutInvalidNamesFromEntities:(id)a0;
- (BOOL)donateLocationNamedEntities:(id)a0 bundleId:(id)a1 groupId:(id)a2 error:(id *)a3;
- (BOOL)deleteAllNamedEntityFeedbackCountsOlderThanDate:(id)a0;
- (id)_loadScoringMLModel;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThan:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)initWithStorage:(id)a0 topicStoreForNamedEntityMapping:(id)a1 contactStoreForMapsFeedback:(id)a2 trialWrapper:(id)a3;
- (BOOL)pruneOrphanedNamedEntityFeedbackCountsWithLimit:(long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(BOOL *)a3;
- (id)_getScoredItemWithFeaturesWithNamedEntity:(id)a0 featureRedactor:(id)a1 excludingSourceBundleId:(id)a2 error:(id *)a3;
- (id)_getScoredItemWithFeaturesWithNamedEntity:(id)a0 scoringDate:(id)a1 excludingSourceBundleId:(id)a2 scoreInterpreter:(id)a3 error:(id *)a4;
- (id)_mapsSearchQueryResultWithError:(id *)a0;
- (BOOL)deleteAllNamedEntitiesOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)iterRankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)_logDifferentiallyPrivateExtractionsWithDpCategory:(id)a0 extractions:(id)a1;
- (BOOL)donateMapItem:(id)a0 forPlaceName:(id)a1 error:(id *)a2;
- (BOOL)_donateTopicsFromEntities:(id)a0 source:(id)a1 cloudSync:(BOOL)a2 sentimentScore:(double)a3 error:(id *)a4;
- (id)_getScoredNamedEntityFeaturesForCoreMLFromIdentifier:(id)a0 excludingSourceBundleId:(id)a1 decayedFeedbackCounts:(id)a2 featurizer:(id)a3 error:(id *)a4;
- (BOOL)_logFeedbackSessionsWithFeedback:(id)a0 error:(id *)a1;
- (id)getScoredNamedEntityFeaturesWithNamedEntity:(id)a0 excludingSourceBundleId:(id)a1 decayRate:(double)a2 error:(id *)a3;
- (BOOL)donateNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 sentimentScore:(double)a4 error:(id *)a5;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;

@end
