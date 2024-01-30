@interface HLPImageCacheController : HLPDataCacheController

+ (id)sharedInstance;
+ (id)defaultInMemoryImageCache;

- (void)commonInit;
- (id)formattedDataWithData:(id)a0;
- (id)formattedDataWithFileURL:(id)a0;
- (void)formattedDataWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isURLValid:(id)a0;
- (id)newDataCache;
- (void)removeAllDataCache;
- (void)addInMemoryCacheForImage:(id)a0 identifier:(id)a1 cost:(unsigned long long)a2;
- (void)removeInMemoryCache;
- (void)addInMemoryCacheForImage:(id)a0 path:(id)a1 cost:(unsigned long long)a2;
- (id)getImageForPath:(id)a0;
- (id)imageFromMemoryCacheForPath:(id)a0;
- (void)removeInMemoryCacheForPath:(id)a0;

@end
