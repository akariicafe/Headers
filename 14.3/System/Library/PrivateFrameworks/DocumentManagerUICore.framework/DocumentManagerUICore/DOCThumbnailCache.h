@class NSCache, NSMapTable;

@interface DOCThumbnailCache : NSObject

@property (readonly, nonatomic) NSMapTable *cachedThumbnailItems;
@property (readonly, nonatomic) NSCache *recentlyUsedItems;

- (void)clear;
- (id)init;
- (void).cxx_destruct;

@end
