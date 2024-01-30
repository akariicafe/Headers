@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CLKTreatedImageCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableArray *_recentlyUsedKeys;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)imageForRawImage:(id)a0 scale:(double)a1 maskMode:(long long)a2;
- (id)imageForRawImage:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 cornerRadius:(double)a2;
- (id)_imageForKey:(id)a0;
- (void)_queue_pruneCacheIfNecessary;
- (id)imageForRawImage:(id)a0 scale:(double)a1 cornerRadius:(double)a2;
- (id)imageForRawImage:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 maskMode:(long long)a2;

@end
