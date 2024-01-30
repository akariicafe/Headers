@interface HDSampleSyncEntity : HDDataSyncEntity

+ (id)_predicateForSyncSession:(id)a0;
+ (id)_predicateForSampleAgeInSyncSession:(id)a0 sampleTypeClass:(Class)a1;
+ (Class)_syncedSampleTypeClass;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (BOOL)supportsSpeculativeNanoSyncChanges;

@end
