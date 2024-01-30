@class NSURLSessionDataTask, NSCachedURLResponse;

@interface WeatherMaps.WeatherMapURLCache : NSURLCache

- (id)initWithMemoryCapacity:(long long)a0 diskCapacity:(long long)a1 directoryURL:(id)a2;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (id)cachedResponseForRequest:(id)a0;
- (void)storeCachedResponse:(id)a0 forDataTask:(id)a1;
- (void)getCachedResponseForDataTask:(NSURLSessionDataTask *)a0 completionHandler:(void (^)(NSCachedURLResponse *))a1;
- (id)initWithMemoryCapacity:(long long)a0 diskCapacity:(long long)a1 diskPath:(id)a2;
- (id)init;

@end
