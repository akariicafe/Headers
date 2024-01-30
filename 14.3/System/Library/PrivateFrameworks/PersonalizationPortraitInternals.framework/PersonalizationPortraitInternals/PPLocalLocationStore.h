@class NSCache, PPLocationStorage, PPTrialWrapper, _PASLock;

@interface PPLocalLocationStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {
    _PASLock *_cache;
    NSCache *_modelCache;
    PPTrialWrapper *_trialWrapper;
}

@property (readonly, nonatomic) PPLocationStorage *storage;
@property (readonly, nonatomic) BOOL useScoreInterpreter;

+ (unsigned short)routineLOITypeToLocationCategory:(long long)a0;
+ (void)sortAndTruncate:(id)a0 queryLimit:(unsigned long long)a1;
+ (id)locationFromMapItem:(id)a0;
+ (unsigned short)poiCategoryToPPLocationCategory:(id)a0;
+ (BOOL)isLocationRelevantNamedEntityCategory:(unsigned long long)a0;
+ (float)resolvedPerRecordDecayRateForSourceBundleId:(id)a0 algorithm:(unsigned short)a1 perRecordDecayRate:(float)a2;
+ (float)resolvedPerRecordDecayRateForFeatureProvider:(id)a0 perRecordDecayRate:(float)a1;
+ (BOOL)isLocationRelevantDynamicNamedEntityCategory:(id)a0;
+ (id)defaultStore;
+ (id)locationFromMapItemDictionary:(id)a0;
+ (id)scoredLocationFromName:(id)a0 category:(unsigned short)a1 score:(double)a2 sentimentScore:(double)a3;
+ (unsigned short)namedEntityCategoryToLocationCategory:(unsigned long long)a0;
+ (id)locationNamedEntityToPPScoredLocation:(id)a0;
+ (float)resolvedPerRecordDecayRateForRecord:(id)a0 perRecordDecayRate:(float)a1;

- (void)processfeedbackItems:(id)a0 scoringDate:(id)a1 clientIdentifier:(id)a2 clientBundleId:(id)a3 mappingId:(id)a4;
- (id)init;
- (id)_feedbackItemsByItemString:(id)a0;
- (id)_feedbackItemToLocationMapForFeedback:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (BOOL)iterLocationRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)deleteAllLocationsOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (id)initWithStorage:(id)a0 trialWrapper:(id)a1;
- (id)_getScoredLocationFeaturesForCoreMLFromIdentifier:(id)a0 scoringDate:(id)a1 excludingSourceBundleId:(id)a2 decayedFeedbackCounts:(id)a3 featurizer:(id)a4 error:(id *)a5;
- (BOOL)_extractDonationsForFeedback:(id)a0 pbFeedbackLog:(id)a1 location:(id)a2 error:(id *)a3;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (id)locationForHome;
- (BOOL)_shouldUseScoringMLModel;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (id)_loadScoreInterpreter;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (double)finalScoreFromRecordsUsingHybrid:(id)a0 streamingScorer:(id)a1 mlModel:(id)a2;
- (id)homeOrWorkAddresses;
- (void)_logDonationForLocations:(id)a0 bundleId:(id)a1 algorithm:(unsigned short)a2 groupId:(id)a3;
- (BOOL)deleteAllLocationFeedbackCountsOlderThanDate:(id)a0;
- (id)_getScoredLocationFeaturesForStreamingScorerWithIdentifier:(id)a0 excludingSourceBundleId:(id)a1 decayedFeedbackCounts:(id)a2 error:(id *)a3;
- (id)_init;
- (id)locationForWork;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (id)rankedLocationsWithQuery:(id)a0 clientProcessName:(id)a1 error:(id *)a2;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThan:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (void)_petLoggingForQuery:(id)a0 resultCount:(unsigned long long)a1 clientProcessName:(id)a2 hasError:(BOOL)a3;
- (id)_unlimitedLocationRecordsWithQuery:(id)a0 error:(id *)a1;
- (id)locationRecordsWithQuery:(id)a0 error:(id *)a1;
- (id)scoreLocations:(id)a0 scoringDate:(id)a1 perRecordDecayRate:(float)a2 decayRate:(float)a3 sourceStats:(id)a4 scoreInterpreter:(id)a5 streamingScorer:(id *)a6 mlModel:(id)a7;
- (BOOL)pruneOrphanedLocationFeedbackCountsWithLimit:(long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(BOOL *)a3;
- (id)_loadScoringMLModel;
- (id)_locationToMappedStringMatchingForLocations:(id)a0 timestamp:(double)a1 error:(id *)a2;
- (id)locationRecordOfCategory:(unsigned short)a0;
- (BOOL)iterRankedLocationsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)donateLocations:(id)a0 source:(id)a1 contextualNamedEntities:(id)a2 algorithm:(unsigned short)a3 cloudSync:(BOOL)a4 decayRate:(double)a5 error:(id *)a6;
- (BOOL)_logFeedbackSessionsWithFeedback:(id)a0 error:(id *)a1;

@end
