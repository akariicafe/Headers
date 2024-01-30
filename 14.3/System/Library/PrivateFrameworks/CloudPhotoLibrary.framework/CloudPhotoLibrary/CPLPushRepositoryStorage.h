@class CPLEnginePushRepository, CPLEngineStore, CPLEngineScopeStorage;

@interface CPLPushRepositoryStorage : CPLChangeStorage

@property (readonly, nonatomic) CPLEngineStore *store;
@property (readonly, nonatomic) CPLEnginePushRepository *pushRepository;
@property (readonly, nonatomic) CPLEngineScopeStorage *scopes;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)changeWithScopedIdentifier:(id)a0;
- (BOOL)hasChangesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (BOOL)getRelatedScopedIdentifier:(id *)a0 forRecordWithScopedIdentifier:(id)a1;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)storageDescription;

@end
