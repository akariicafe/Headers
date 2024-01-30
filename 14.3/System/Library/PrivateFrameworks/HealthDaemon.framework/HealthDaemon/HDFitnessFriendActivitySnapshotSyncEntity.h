@interface HDFitnessFriendActivitySnapshotSyncEntity : HDSampleSyncEntity

+ (BOOL)supportsSyncStore:(id)a0;
+ (id)syncEntityIdentifier;
+ (Class)healthEntityClass;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;

@end
