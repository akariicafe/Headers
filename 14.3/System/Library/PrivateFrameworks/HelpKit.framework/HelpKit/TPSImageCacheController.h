@interface TPSImageCacheController : TPSDataCacheController

+ (id)sharedInstance;
+ (id)defaultInMemoryImageCache;

- (BOOL)isURLValid:(id)a0;
- (id)newDataCache;
- (void)formattedDataWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllDataCache;
- (void)commonInit;
- (id)formattedDataWithFileURL:(id)a0;
- (id)formattedDataWithData:(id)a0;
- (void)removeInMemoryCache;
- (void)addInMemoryCacheForImage:(id)a0 identifier:(id)a1 cost:(unsigned long long)a2;
- (id)imageFromMemoryCacheForPath:(id)a0;
- (void)addInMemoryCacheForImage:(id)a0 path:(id)a1 cost:(unsigned long long)a2;
- (void)removeInMemoryCacheForPath:(id)a0;
- (id)getImageForPath:(id)a0;

@end
