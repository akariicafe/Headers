@interface HDCDASampleSyncEntity : HDSampleSyncEntity

+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (id)syncEntityIdentifier;
+ (BOOL)supportsSpeculativeNanoSyncChanges;
+ (int)nanoSyncObjectType;
+ (Class)healthEntityClass;
+ (id)_objectWithCodable:(id)a0;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;

@end
