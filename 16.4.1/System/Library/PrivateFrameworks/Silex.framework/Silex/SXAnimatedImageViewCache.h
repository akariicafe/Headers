@class NSMutableIndexSet, NSOperationQueue, NSMutableArray, SXAnimatedImage;
@protocol SXAnimatedImageViewCacheDelegate;

@interface SXAnimatedImageViewCache : NSObject

@property (nonatomic) BOOL cachingEnabled;
@property long long singleImageByteSize;
@property unsigned long long lastRequestedIndex;
@property (readonly, nonatomic) unsigned long long maxCacheSize;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) unsigned long long numberOfCachedImages;
@property (readonly, nonatomic) NSMutableArray *cachedImages;
@property (readonly, nonatomic) NSMutableIndexSet *indicesToCache;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (weak, nonatomic) id<SXAnimatedImageViewCacheDelegate> delegate;
@property (weak, nonatomic) SXAnimatedImage *animatedImage;
@property (nonatomic, getter=preloadingSuspended) BOOL suspendPreloading;

- (void)prune;
- (void).cxx_destruct;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)cacheNextImage;
- (void)checkCacheSize;
- (id)decodeImageFromSource:(struct CGImageSource { } *)a0 index:(unsigned long long)a1;
- (void)decreaseCacheSize;
- (id)imageForFrameIndex:(unsigned long long)a0;
- (unsigned long long)nearestCachedFrameIndexForFrameIndex:(unsigned long long)a0;
- (void)prepareCache;
- (void)prepareImageForFrameIndex:(unsigned long long)a0;
- (void)restoreCacheSize;

@end
