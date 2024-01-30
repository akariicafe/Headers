@interface HDCDASampleSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (Class)healthEntityClass;
+ (Class)_syncedSampleTypeClass;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (int)nanoSyncObjectType;
+ (id)_objectWithCodable:(id)a0;
+ (BOOL)supportsSpeculativeNanoSyncChanges;

@end
