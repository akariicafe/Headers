@interface HDCategorySampleSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (Class)healthEntityClass;
+ (id)_predicateForSyncSession:(id)a0;
+ (id)_objectWithCodable:(id)a0;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;
+ (id)_predicateForCategoryTypesToSync;
+ (id)_categoryTypesDerivedFromQuantitySamples;

@end
