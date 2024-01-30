@interface HDBinarySampleSyncEntity : HDSampleSyncEntity

+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (Class)healthEntityClass;
+ (BOOL)_insertObjectsFromCodableObjectCollection:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)_objectWithCodable:(id)a0;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;
+ (BOOL)_insertObjectFromBinaryCodable:(id)a0 syncStore:(id)a1 profile:(id)a2 provenance:(id)a3 error:(id *)a4;

@end
