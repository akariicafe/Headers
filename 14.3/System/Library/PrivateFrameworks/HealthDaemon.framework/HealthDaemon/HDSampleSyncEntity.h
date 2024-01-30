@interface HDSampleSyncEntity : HDDataSyncEntity

+ (BOOL)supportsSpeculativeNanoSyncChanges;
+ (id)_predicateForSyncSession:(id)a0;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (id)_predicateForDateIntervalInSyncSession:(id)a0;
+ (Class)_syncedSampleTypeClass;
+ (id)_predicateForSampleAgeInSyncSession:(id)a0 sampleTypeClass:(Class)a1;
+ (id)_predicateForSampleAgeWithMaximumObjectAgeByType:(id)a0 defaultMaxAge:(id)a1 sessionStartDate:(id)a2;

@end
