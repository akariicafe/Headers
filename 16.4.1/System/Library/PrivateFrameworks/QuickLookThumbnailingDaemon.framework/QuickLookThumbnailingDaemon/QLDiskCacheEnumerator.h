@class QLDiskCache;

@interface QLDiskCacheEnumerator : NSObject {
    QLDiskCache *_diskCache;
}

+ (double)_expectedThumbnailSizeForRequest:(id)a0;
+ (BOOL)cachedThumbnailDataIsLowQuality:(id)a0 forThumbnailRequest:(id)a1;

- (void).cxx_destruct;
- (id)initWithDiskCache:(id)a0;

@end
