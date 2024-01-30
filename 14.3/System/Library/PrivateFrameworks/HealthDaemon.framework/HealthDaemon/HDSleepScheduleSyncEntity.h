@interface HDSleepScheduleSyncEntity : HDSampleSyncEntity

+ (BOOL)supportsSyncStore:(id)a0;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (id)syncEntityIdentifier;
+ (int)nanoSyncObjectType;
+ (Class)healthEntityClass;
+ (id)_objectWithCodable:(id)a0;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;

@end
