@class MARelation, NSArray, NSSet, NSMutableDictionary, NSDate, PGMemoryElectorConfiguration, NSObject;
@protocol OS_os_log;

@interface PGMemoryPlanner : NSObject {
    NSArray *_pastMemories;
    NSArray *_memoriesToAvoid;
    NSArray *_futureMemoriesGroupedByTrigger;
    NSObject<OS_os_log> *_loggingConnection;
    NSDate *_currentUniversalMemoryDate;
    NSSet *_similarCategorySets;
    NSMutableDictionary *_timeDecayScoreByPastMemoryCreationDate;
    NSMutableDictionary *_maximumTimeDecayScoreByPastMemoryIdentifier;
    MARelation *_secondaryFeatureOfFeature;
}

@property (readonly, nonatomic) PGMemoryElectorConfiguration *configuration;

+ (double)_momentCommonalityScoreComparingMomentNodes:(id)a0 toMomentNodes:(id)a1;
+ (id)groupFutureMemoriesPerTrigger:(id)a0;
+ (BOOL)_isFallbackMemory:(id)a0;
+ (BOOL)canElectTriggeredMemory:(id)a0 withAlreadyElectedMemories:(id)a1;
+ (BOOL)canElectEndOfYearTriggeredMemory:(id)a0 withAlreadyElectedMemories:(id)a1;

- (void).cxx_destruct;
- (id)creationDateOfLastMemory;
- (unsigned long long)numberOfDaysSinceMemoryUpgrade;
- (id)initWithPastSource:(id)a0 futureSource:(id)a1 configuration:(id)a2 graph:(id)a3 loggingConnection:(id)a4 progressReporter:(id)a5;
- (id)timeDecayScoreByPastMemoryCreationDate;
- (id)maximumTimeDecayScoreByPastMemoryIdentifier;
- (void)_computeIfNeededTimeDecayScoreForPastMemories;
- (BOOL)tooSoonToElectMemory:(id)a0;
- (id)filterMemories:(id)a0 forTriggerCollisionsWithTriggerHandler:(id)a1 graph:(id)a2 progressReporter:(id)a3;
- (id)_overallDateIntervalForTriggeredMemories:(id)a0;
- (double)timeDecayScoreForTriggeredMemory:(id)a0 numberOfDaysToLook:(unsigned long long)a1;
- (double)collisionScoreForMemory:(id)a0;
- (double)avoidScoreForMemory:(id)a0;
- (double)featureCommonalityScoreComparingFeatureNodes:(id)a0 toFeatureNodes:(id)a1;
- (double)commonalityScoreComparingMemory:(id)a0 toMemory:(id)a1;
- (double)commonalityScoreComparingMemory:(id)a0 toAlreadyElectedMemory:(id)a1;
- (double)_commonalityScoreComparingMemory:(id)a0 toMemory:(id)a1 momentWeight:(double)a2 featureWeight:(double)a3 memoryCategoryWeight:(double)a4;
- (double)categorySimilarityScoreBetweenMemory:(id)a0 andMemory:(id)a1;
- (id)similarCategorySets;

@end
