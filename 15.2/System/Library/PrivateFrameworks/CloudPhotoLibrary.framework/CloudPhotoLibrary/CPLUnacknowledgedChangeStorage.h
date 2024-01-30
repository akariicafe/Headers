@class CPLEngineStore;

@interface CPLUnacknowledgedChangeStorage : CPLChangeStorage

@property (readonly, nonatomic) CPLEngineStore *store;

- (id)initWithStore:(id)a0;
- (id)storageDescription;
- (void).cxx_destruct;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)changeWithScopedIdentifier:(id)a0;

@end
