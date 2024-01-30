@class CPLEngineTransientRepository;

@interface CPLTransientRepositoryStorage : CPLChangeStorage

@property (readonly, nonatomic) CPLEngineTransientRepository *transientRepository;

- (id)storageDescription;
- (void).cxx_destruct;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)changeWithScopedIdentifier:(id)a0;
- (id)initWithTransientRepository:(id)a0;

@end
