@interface HDQuantitySampleSyncEntity : HDSampleSyncEntity

+ (id)syncEntityIdentifier;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (int)nanoSyncObjectType;
+ (Class)healthEntityClass;
+ (id)_objectWithCodable:(id)a0;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;
+ (id)_headphoneAudioExposureSamplesExpirationPredicateForNowDate:(id)a0;

@end
