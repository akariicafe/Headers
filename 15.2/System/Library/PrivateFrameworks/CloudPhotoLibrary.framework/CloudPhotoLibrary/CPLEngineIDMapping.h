@class NSString, CPLPlatformObject;

@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject, CPLEngineIDMapping>

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)scopeType;
- (BOOL)addCloudScopedIdentifier:(id)a0 forLocalScopedIdentifier:(id)a1 isFinal:(BOOL)a2 direction:(unsigned long long)a3 error:(id *)a4;
- (id)firstAvailableCloudScopedIdentifierForProposedCloudScopedIdentifier:(id)a0;
- (BOOL)hasPendingIdentifiers;
- (id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)a0;
- (id)cloudScopedIdentifierForLocalScopedIdentifier:(id)a0 isFinal:(BOOL *)a1;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)setFinalCloudScopedIdentifier:(id)a0 forPendingCloudScopedIdentifier:(id)a1 error:(id *)a2;
- (BOOL)removeMappingForCloudScopedIdentifier:(id)a0 error:(id *)a1;
- (BOOL)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (id)setupCloudScopedIdentifier:(id)a0 forLocalScopedIdentifier:(id)a1 isFinal:(BOOL)a2 direction:(unsigned long long)a3 error:(id *)a4;
- (id)localScopedIdentifierForCloudScopedIdentifier:(id)a0 isFinal:(BOOL *)a1;
- (BOOL)markAllPendingIdentifiersForScopeWithIdentifier:(id)a0 asFinalWithError:(id *)a1;
- (BOOL)addDeleteEventForRecordWithLocalScopedIdentifier:(id)a0 direction:(unsigned long long)a1 error:(id *)a2;
- (BOOL)addAddEventForRecordWithLocalScopedIdentifier:(id)a0 direction:(unsigned long long)a1 error:(id *)a2;

@end
