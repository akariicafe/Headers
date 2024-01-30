@class NSString, NSMutableDictionary, TSUPointerKeyDictionary, NSObject, NSCache;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TSDTileStorage : NSObject <NSCacheDelegate> {
    NSCache *mCache;
    TSUPointerKeyDictionary *mReverseCacheKeys;
    NSObject<OS_dispatch_semaphore> *mReverseCacheKeysLock;
    NSObject<OS_dispatch_queue> *mCacheKeysQueue;
    NSMutableDictionary *mCacheKeysByBucket;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)dealloc;
- (id)init;
- (void)removeAllContents;
- (id)contentsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentsScale:(double)a1 forTileAtLocation:(struct { unsigned long long x0; unsigned long long x1; })a2 inBucket:(id)a3;
- (id)p_cacheKeyForImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentsScale:(double)a1 tileLocation:(struct { unsigned long long x0; unsigned long long x1; })a2;
- (void)removeImagesInBucket:(id)a0;
- (void)storeContents:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentsScale:(double)a2 forTileAtLocation:(struct { unsigned long long x0; unsigned long long x1; })a3 inBucket:(id)a4;

@end
