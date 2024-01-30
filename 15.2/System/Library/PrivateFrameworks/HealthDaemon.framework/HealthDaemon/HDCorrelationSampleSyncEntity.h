@interface HDCorrelationSampleSyncEntity : HDSampleSyncEntity

+ (id)_predicateForSyncSession:(id)a0;
+ (id)syncEntityIdentifier;
+ (Class)healthEntityClass;
+ (Class)_syncedSampleTypeClass;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (int)nanoSyncObjectType;
+ (id)_objectWithCodable:(id)a0;

@end
