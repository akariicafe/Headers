@interface PGMemoryFeatureBlocking : NSObject

+ (id)_bestAddressNodeAsCollectionInMomentNodeAsCollection:(id)a0;
+ (id)_blockableDateFeatureForFeatureNodes:(id)a0 momentNodes:(id)a1;
+ (id)_blockableDateIntervalFeatureForFeatureNodes:(id)a0 momentNodes:(id)a1 memoryCategory:(unsigned long long)a2;
+ (id)_blockableHolidayFeatureForFeatureNodes:(id)a0 momentNodes:(id)a1;
+ (id)_blockableLocationFeatureForFeatureNodes:(id)a0;
+ (id)_blockableLocationFeatureForFeatureNodes:(id)a0 momentNodes:(id)a1;
+ (id)_blockableLocationFeatureForMomentNodes:(id)a0;
+ (id)_blockablePersonFeatureForFeatureNodes:(id)a0 momentNodes:(id)a1;
+ (id)_momentNodesWithBlockedFeatureInGraph:(id)a0 areaNamesWithNegativeFeedback:(id)a1 holidayNamesWithNegativeFeedback:(id)a2 datesWithNegativeFeedback:(id)a3 personUUIDsWithNegativeFeedback:(id)a4 locationsWithNegativeFeedback:(id)a5 loggingConnection:(id)a6 progressReporter:(id)a7;
+ (id)_prominentPersonNodeAsCollectionInMomentNodeAsCollection:(id)a0 withPersonNodes:(id)a1 maximumNumberOfPersonsAllowed:(unsigned long long)a2 minimumPresenceThreshold:(double)a3 maximumOthersPresenceThreshold:(double)a4;
+ (id)blockableFeaturesForFeatureNodes:(id)a0 momentNodes:(id)a1 memoryCategory:(unsigned long long)a2;
+ (id)momentNodesWithBlockedFeatureInGraph:(id)a0 userFeedbackCalculator:(id)a1 loggingConnection:(id)a2 progressReporter:(id)a3;

@end
