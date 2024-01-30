@interface HDWorkoutSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (id)_predicateForSampleAgeInSyncSession:(id)a0 sampleTypeClass:(Class)a1;
+ (Class)healthEntityClass;
+ (Class)_syncedSampleTypeClass;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (int)nanoSyncObjectType;
+ (id)_objectWithCodable:(id)a0;

@end
