@class NSCache, PPTrialWrapper, PPTopicStorage, _PASLock;

@interface PPLocalTopicStore : PPTopicStore <PPFeedbackProcessing> {
    _PASLock *_lock;
    NSCache *_modelCache;
    PPTrialWrapper *_trialWrapper;
}

@property (readonly, nonatomic) PPTopicStorage *storage;

+ (id)aggregateRecords:(id)a0 scoringDate:(id)a1 perRecordDecayRate:(float)a2 decayRate:(float)a3;
+ (void)sortAndTruncate:(id)a0 queryLimit:(unsigned long long)a1;
+ (id)calibrateScoredTopic:(id)a0 calibrationTrie:(id)a1;
+ (float)resolvedPerRecordDecayRateForFeatureProvider:(id)a0 perRecordDecayRate:(float)a1;
+ (id)defaultStore;
+ (id)recordsForTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2;
+ (float)resolvedPerRecordDecayRateForRecord:(id)a0 perRecordDecayRate:(float)a1;

- (id)topicRecordsWithQuery:(id)a0 error:(id *)a1;
- (id)topicExtractionsFromText:(id)a0 error:(id *)a1;
- (void)processfeedbackItems:(id)a0 scoringDate:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4;
- (id)_topicTransformForId:(id)a0;
- (id)getScoredTopicsFeaturesWithTopicId:(id)a0 scoringDate:(id)a1 excludingSourceBundleId:(id)a2 decayRate:(double)a3 error:(id *)a4 strictFiltering:(BOOL)a5 scoreInterpreter:(id)a6;
- (id)init;
- (id)_feedbackItemsByItemString:(id)a0;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 algorithm:(unsigned long long)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)unmapMappedTopicIdentifier:(id)a0 mappingIdentifier:(id)a1 error:(id *)a2;
- (BOOL)cloudSyncWithError:(id *)a0;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (void)_processPortraitTopicPendingFeedback:(id)a0 scoringDate:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (id)_dpLoggingKeyForMappingId:(id)a0;
- (id)initWithStorage:(id)a0 trialWrapper:(id)a1;
- (BOOL)deleteAllTopicFeedbackCountsOlderThanDate:(id)a0;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 algorithm:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (void)disableSyncForBundleIds:(id)a0;
- (BOOL)_defaultIterScoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2 clientProcessName:(id)a3 block:(id /* block */)a4;
- (BOOL)donateTopics:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 sentimentScore:(double)a4 exactMatchesInSourceText:(id)a5 error:(id *)a6;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)_shouldUseScoringMLModel;
- (BOOL)_unlimitedTopicRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)logDonationErrorForReason:(long long)a0 errorCode:(unsigned long long)a1 source:(id)a2;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 algorithm:(unsigned long long)a2 olderThan:(id)a3 deletedCount:(unsigned long long *)a4 error:(id *)a5;
- (id)_getScoredTopicFeaturesForCoreMLFromIdentifier:(id)a0 scoringDate:(id)a1 excludingSourceBundleId:(id)a2 decayedFeedbackCounts:(id)a3 featurizer:(id)a4 error:(id *)a5;
- (id)_loadScoreInterpreter;
- (id)rankedTopicsWithQuery:(id)a0 error:(id *)a1 clientProcessName:(id)a2;
- (void)_petLoggingForMappedTopicQuery:(id)a0 mappingId:(id)a1 count:(unsigned long long)a2 clientProcessName:(id)a3 hasError:(BOOL)a4;
- (double)finalScoreFromRecordsUsingHybrid:(id)a0 streamingScorer:(id)a1 mlModel:(id)a2;
- (id)_defaultScoreTopics:(id)a0 scoringDate:(id)a1 decayRate:(double)a2 strictFiltering:(BOOL)a3 sourceStats:(id)a4 decayedFeedbackCounts:(id)a5 scoreInterpreter:(id)a6 streamingScorer:(id *)a7;
- (void)_processMappedTopicPendingFeedback:(id)a0 scoringDate:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4;
- (BOOL)iterTopicRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)_blockTopicsInPlace:(id)a0;
- (id)_filterBlockedScoredTopicsAndExactMatches:(id)a0;
- (id)_blockIneligibleScoredTopics:(id)a0;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 algorithm:(unsigned long long)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (void)_petLoggingForQuery:(id)a0 count:(unsigned long long)a1 clientProcessName:(id)a2 hasError:(BOOL)a3;
- (id)scoreTopics:(id)a0 scoringDate:(id)a1 decayRate:(double)a2 strictFiltering:(BOOL)a3 sourceStats:(id)a4 decayedFeedbackCounts:(id)a5 scoreInterpreter:(id)a6 streamingScorer:(id *)a7 mlModel:(id)a8;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)flushDonationsWithError:(id *)a0;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (BOOL)_isTopicInPortraitDomain:(id)a0;
- (BOOL)deleteAllTopicsWithTopicId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (id)rankedTopicsWithQuery:(id)a0 error:(id *)a1;
- (void)_mappedTopicsFilterPendingFeedbackItems:(id)a0 scoringDate:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4;
- (BOOL)deleteAllTopicsOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (id)_coalesceScoredTopics:(id)a0;
- (BOOL)iterScoredTopicsWithQuery:(id)a0 error:(id *)a1 clientProcessName:(id)a2 block:(id /* block */)a3;
- (id)scoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2;
- (id)_loadScoringMLModel;
- (BOOL)pruneOrphanedTopicFeedbackCountsWithLimit:(unsigned long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(BOOL *)a3;
- (id)scoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2 clientProcessName:(id)a3;
- (id)topicExtractionsFromText:(id)a0 clientProcessName:(id)a1 error:(id *)a2;
- (void)_dpLoggingForMappingId:(id)a0 mappedTopics:(id)a1;
- (id)_unmappedQIDsToFeedbackTypeCounts:(id)a0 mappingId:(id)a1;
- (void)_logDonationForTopics:(id)a0 bundleId:(id)a1 algorithm:(unsigned long long)a2 groupId:(id)a3;
- (id)_defaultScoresForTopicMapping:(id)a0 query:(id)a1 clientProcessName:(id)a2 error:(id *)a3;
- (BOOL)iterScoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2 block:(id /* block */)a3;
- (BOOL)deleteAllTopicsWithTopicId:(id)a0 algorithm:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThan:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (id)_coalesceScoredTopics:(id)a0 exactMatchesInSourceText:(id)a1;
- (BOOL)_logFeedbackSessionsWithFeedback:(id)a0 error:(id *)a1;
- (BOOL)iterScoresForTopicMapping:(id)a0 query:(id)a1 error:(id *)a2 clientProcessName:(id)a3 block:(id /* block */)a4;

@end
