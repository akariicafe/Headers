@class NSString, HDSyncEntityIdentifier;

@interface HDDeletedSampleSyncEntity : HDSampleSyncEntity <HDNanoSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_predicateForSyncSession:(id)a0;
+ (BOOL)_insertObjectsFromCodableObjectCollection:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (Class)healthEntityClass;
+ (Class)_syncedSampleTypeClass;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (int)nanoSyncObjectType;


@end
