@interface HDSampleSyncEntity : HDDataSyncEntity

+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (id)_predicateForSampleAgeInSyncSession:(id)a0 sampleTypeClass:(Class)a1;
+ (id)_predicateForSyncSession:(id)a0;
+ (Class)_syncedSampleTypeClass;
+ (BOOL)supportsSpeculativeNanoSyncChanges;

@end
