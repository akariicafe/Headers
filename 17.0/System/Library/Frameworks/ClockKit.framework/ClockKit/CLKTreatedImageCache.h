@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CLKTreatedImageCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableArray *_recentlyUsedKeys;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)purgeCache;
- (void).cxx_destruct;
- (id)_imageForKey:(id)a0;
- (void)_queue_pruneCacheIfNecessary;
- (id)imageForRawImage:(id)a0 maxSDKSize:(struct CGSize { double x0; double x1; })a1 maxDeviceSize:(struct CGSize { double x0; double x1; })a2 cornerRadius:(double)a3;
- (id)imageForRawImage:(id)a0 maxSDKSize:(struct CGSize { double x0; double x1; })a1 maxDeviceSize:(struct CGSize { double x0; double x1; })a2 maskMode:(long long)a3;
- (id)imageForRawImage:(id)a0 scale:(double)a1 sdkDeviceScale:(double)a2 cornerRadius:(double)a3;
- (id)imageForRawImage:(id)a0 scale:(double)a1 sdkDeviceScale:(double)a2 maskMode:(long long)a3;

@end
