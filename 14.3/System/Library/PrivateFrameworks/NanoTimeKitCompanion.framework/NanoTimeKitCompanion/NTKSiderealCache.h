@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface NTKSiderealCache : NSObject {
    NSCache *_dataCache;
    NSObject<OS_dispatch_queue> *_readerWriterQueue;
    NSCache *_aplCache;
}

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_init;
- (id)imageDataForKey:(id)a0 generationBlock:(id /* block */)a1;
- (void)_purgeEverything;
- (void)purgeCachedKey:(id)a0;
- (void)purgeAPLCache;
- (float)aplForDate:(id)a0 generationBlock:(id /* block */)a1;

@end
