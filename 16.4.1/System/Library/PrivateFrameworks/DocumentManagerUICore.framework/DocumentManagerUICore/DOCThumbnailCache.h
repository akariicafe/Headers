@class NSCache, NSMapTable;

@interface DOCThumbnailCache : NSObject

@property (readonly, nonatomic) NSMapTable *cachedThumbnailNodes;
@property (readonly, nonatomic) NSCache *recentlyUsedNodes;

- (id)init;
- (void)clear;
- (void).cxx_destruct;

@end
