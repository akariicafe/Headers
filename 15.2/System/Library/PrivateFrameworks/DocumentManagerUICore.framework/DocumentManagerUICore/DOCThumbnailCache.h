@class NSCache, NSMapTable;

@interface DOCThumbnailCache : NSObject

@property (readonly, nonatomic) NSMapTable *cachedThumbnailItems;
@property (readonly, nonatomic) NSCache *recentlyUsedItems;

- (void)clear;
- (void).cxx_destruct;
- (id)init;

@end
