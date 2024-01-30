@class NSString, HDSyncEntityIdentifier;

@interface HDDeletedSampleSyncEntity : HDSampleSyncEntity <HDNanoSyncEntity>

@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (int)nanoSyncObjectType;
+ (Class)healthEntityClass;
+ (id)_predicateForSyncSession:(id)a0;
+ (BOOL)_insertObjectsFromCodableObjectCollection:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)_basePruningPredicateForDate:(id)a0 profile:(id)a1;
+ (Class)_syncedSampleTypeClass;


@end
