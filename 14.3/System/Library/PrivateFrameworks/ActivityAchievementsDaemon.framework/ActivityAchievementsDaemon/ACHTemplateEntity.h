@class NSString, HDSyncEntityIdentifier;
@protocol ACHTemplateEntitySyncedTemplatesObserver;

@interface ACHTemplateEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>

@property (class, weak, nonatomic) id<ACHTemplateEntitySyncedTemplatesObserver> syncedTemplatesObserver;
@property (class, readonly, copy, nonatomic) HDSyncEntityIdentifier *syncEntityIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)a0 database:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (BOOL)supportsSyncStore:(id)a0;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)a0;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 profile:(id)a2 messageHandler:(id)a3 error:(id *)a4;
+ (id)createTableSQL;
+ (id)propertyForSyncProvenance;
+ (long long)receiveSyncObjects:(id)a0 syncStore:(id)a1 profile:(id)a2 error:(id *)a3;
+ (long long)nextSyncAnchorWithSession:(id)a0 predicate:(id)a1 startSyncAnchor:(long long)a2 profile:(id)a3 error:(id *)a4;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)a0;
+ (id)decodeSyncObjectWithData:(id)a0;
+ (long long)protectionClass;
+ (BOOL)insertTemplates:(id)a0 provenance:(long long)a1 profile:(id)a2 databaseContext:(id)a3 error:(id *)a4;
+ (BOOL)removeTemplates:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)allTemplatesWithProfile:(id)a0 error:(id *)a1;
+ (BOOL)_insertTemplates:(id)a0 provenance:(long long)a1 profile:(id)a2 databaseContext:(id)a3 error:(id *)a4;
+ (BOOL)_removeTemplates:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_templatesWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_insertTemplate:(id)a0 provenance:(long long)a1 database:(id)a2 error:(id *)a3;
+ (id)codableTemplateForTemplateInDatabase:(id)a0 profile:(id)a1 error:(id *)a2;


@end
