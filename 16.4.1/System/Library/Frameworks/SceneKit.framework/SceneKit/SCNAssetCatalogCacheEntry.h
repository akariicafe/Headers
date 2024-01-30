@interface SCNAssetCatalogCacheEntry : NSObject

@property (retain, nonatomic) id item;
@property (nonatomic) double timestamp;

- (void)dealloc;

@end
