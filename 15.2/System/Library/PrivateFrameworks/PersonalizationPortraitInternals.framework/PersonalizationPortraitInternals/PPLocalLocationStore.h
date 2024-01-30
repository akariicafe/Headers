@class NSCache, PPLocationStorage, PPTrialWrapper, _PASLock;

@interface PPLocalLocationStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {
    _PASLock *_cache;
    NSCache *_modelCache;
    PPTrialWrapper *_trialWrapper;
}

@property (readonly, nonatomic) PPLocationStorage *storage;
@property (readonly, nonatomic) BOOL useScoreInterpreter;

+ (BOOL)isLocationRelevantNamedEntityCategory:(unsigned long long)a0;
+ (id)defaultStore;
+ (id)locationFromMapItemDictionary:(id)a0;
+ (unsigned short)routineLOITypeToLocationCategory:(long long)a0;
+ (unsigned short)namedEntityCategoryToLocationCategory:(unsigned long long)a0;
+ (id)locationFromMapItem:(id)a0;
+ (id)scoredLocationFromName:(id)a0 category:(unsigned short)a1 score:(double)a2 sentimentScore:(double)a3;
+ (id)locationNamedEntityToPPScoredLocation:(id)a0;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)deleteAllLocationsOlderThanDate:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (void)processFeedback:(id)a0;
- (BOOL)iterRankedLocationsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)locationRecordsWithQuery:(id)a0 error:(id *)a1;
- (double)finalScoreFromRecordsUsingHybrid:(id)a0 streamingScorer:(id)a1 mlModel:(id)a2;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThan:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)init;
- (id)locationForHome;
- (id)_init;
- (id)locationForWork;
- (id)locationRecordOfCategory:(unsigned short)a0;
- (id)rankedLocationsWithQuery:(id)a0 clientProcessName:(id)a1 error:(id *)a2;
- (BOOL)donateLocations:(id)a0 source:(id)a1 contextualNamedEntities:(id)a2 algorithm:(unsigned short)a3 cloudSync:(BOOL)a4 error:(id *)a5;
- (id)homeOrWorkAddresses;
- (BOOL)deleteAllLocationFeedbackCountsOlderThanDate:(id)a0;
- (id)initWithStorage:(id)a0 trialWrapper:(id)a1;
- (BOOL)pruneOrphanedLocationFeedbackCountsWithLimit:(long long)a0 rowOffset:(unsigned long long)a1 deletedCount:(unsigned long long *)a2 isComplete:(BOOL *)a3;
- (BOOL)iterLocationRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;

@end
