@class CPLEnginePushRepository, CPLEngineScopeStorage;

@interface CPLPushRepositoryStorage : CPLChangeStorage {
    unsigned long long _storageScopeType;
    CPLEngineScopeStorage *_scopes;
}

@property (readonly, nonatomic) CPLEnginePushRepository *pushRepository;

- (id)storageDescription;
- (void).cxx_destruct;
- (BOOL)getRelatedScopedIdentifier:(id *)a0 forRecordWithScopedIdentifier:(id)a1;
- (BOOL)hasChangesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)scopedIdentifierAddingScopeIndexForScopedIdentifier:(id)a0;
- (id)initWithPushRepository:(id)a0;
- (id)changeWithScopedIdentifier:(id)a0;

@end
