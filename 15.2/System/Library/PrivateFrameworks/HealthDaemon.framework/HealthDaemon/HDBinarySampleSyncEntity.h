@interface HDBinarySampleSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (BOOL)_insertObjectsFromCodableObjectCollection:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (Class)healthEntityClass;
+ (Class)_syncedSampleTypeClass;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (int)nanoSyncObjectType;
+ (id)_objectWithCodable:(id)a0;

@end
