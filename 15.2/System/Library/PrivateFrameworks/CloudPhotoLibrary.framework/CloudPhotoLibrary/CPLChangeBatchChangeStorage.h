@class CPLChangeBatch, NSDictionary, NSString;

@interface CPLChangeBatchChangeStorage : CPLChangeStorage {
    NSDictionary *_changesPerScopedIdentifier;
    NSString *_storageDescription;
}

@property (readonly, nonatomic) CPLChangeBatch *batch;

- (id)initWithBatch:(id)a0 name:(id)a1;
- (id)storageDescription;
- (void).cxx_destruct;
- (id)changesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)changeWithScopedIdentifier:(id)a0;

@end
