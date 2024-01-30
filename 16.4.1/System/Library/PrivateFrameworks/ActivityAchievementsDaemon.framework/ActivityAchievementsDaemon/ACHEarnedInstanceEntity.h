@class NSString, HDSyncEntityIdentifier;
@protocol ACHEarnedInstanceEntitySyncedEarnedInstancesObserver, ACHEarnedInstanceEntityJournalEntryAppliedObserver;

@interface ACHEarnedInstanceEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>

@property (class, weak, nonatomic) id<ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> syncedEarnedInstancesObserver;
@property (class, weak, nonatomic) id<ACHEarnedInstanceEntityJournalEntryAppliedObserver> journalEntryAppliedObserver;
@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)propertyForSyncProvenance;
+ (BOOL)supportsSyncStore:(id)a0;
+ (BOOL)removeEarnedInstances:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)codableEarnedInstanceForEarnedInstanceInDatabase:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)protectionClass;
+ (id)_earnedInstancesWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_insertEarnedInstance:(id)a0 provenance:(long long)a1 database:(id)a2 error:(id *)a3;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)_insertEarnedInstances:(id)a0 provenance:(long long)a1 profile:(id)a2 databaseContext:(id)a3 error:(id *)a4;
+ (BOOL)removeEarnedInstancesForTemplateUniqueName:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (unsigned long long)countOfEarnedInstancesForTemplateUniqueName:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)decodeSyncObjectWithData:(id)a0;
+ (id)_earnedInstancesWithPredicate:(id)a0 limit:(unsigned long long)a1 ascendingByEarnedDate:(BOOL)a2 profile:(id)a3 error:(id *)a4;
+ (id)earnedInstancesForDateComponents:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)allEarnedInstancesWithProfile:(id)a0 error:(id *)a1;
+ (id)createTableSQL;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (id)mostRecentEarnedInstanceForTemplateUniqueName:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)earnedInstancesForTemplateUniqueName:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)insertEarnedInstances:(id)a0 provenance:(long long)a1 profile:(id)a2 databaseContext:(id)a3 error:(id *)a4;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 profile:(id)a2 messageHandler:(id)a3 error:(id *)a4;
+ (unsigned long long)_countOfEarnedInstancesWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)receiveSyncObjects:(id)a0 version:(struct { int x0; int x1; })a1 syncStore:(id)a2 profile:(id)a3 error:(id *)a4;
+ (long long)nextSyncAnchorWithSession:(id)a0 startSyncAnchor:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)removeAllEarnedInstancesWithProfile:(id)a0 error:(id *)a1;


@end
