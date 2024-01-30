@class CPLEngineCloudCache, CPLEngineStore;
@protocol CPLEngineIDMapping;

@interface CPLClientCacheBaseView : CPLRecordStorageView

@property (readonly, nonatomic) CPLEngineStore *store;
@property (readonly, nonatomic) CPLEngineCloudCache *cloudCache;
@property (readonly, nonatomic) id<CPLEngineIDMapping> idMapping;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasRecordWithScopedIdentifier:(id)a0;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)a0;
- (id)recordViewWithScopedIdentifier:(id)a0;
- (id)recordViewsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;

@end
