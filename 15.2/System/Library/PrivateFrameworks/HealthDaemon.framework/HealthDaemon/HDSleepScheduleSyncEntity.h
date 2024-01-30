@interface HDSleepScheduleSyncEntity : HDSampleSyncEntity

+ (BOOL)supportsSyncStore:(id)a0;
+ (id)syncEntityIdentifier;
+ (Class)healthEntityClass;
+ (Class)_syncedSampleTypeClass;
+ (BOOL)supportsDateBasedSharding;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (int)nanoSyncObjectType;
+ (id)_objectWithCodable:(id)a0;

@end
