@interface TPSStringCacheController : TPSDataCacheController

+ (id)sharedInstance;

- (BOOL)isURLValid:(id)a0;
- (id)newDataCache;
- (void)formattedDataWithFileURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)formattedDataWithFileURL:(id)a0;
- (id)formattedDataWithData:(id)a0;

@end
