@interface DCAssetFetcherContext : NSObject

@property (nonatomic) BOOL allowCatalogRefresh;
@property (nonatomic) BOOL ignoreCachedMetadata;

- (id)description;

@end
