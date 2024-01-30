@class NSCountedSet, NSMutableDictionary, NSString, NSObject, NSCache;
@protocol OS_os_log;

@interface PXAudioAssetImageProvider : NSObject <PXUIImageProvider>

@property (nonatomic) long long requestCounter;
@property (readonly, nonatomic) NSMutableDictionary *requestByClientID;
@property (readonly, nonatomic) NSMutableDictionary *requestIDByCacheSpec;
@property (readonly, nonatomic) NSCountedSet *requestCountByCacheSpec;
@property (readonly, nonatomic) NSMutableDictionary *requestsByImageLoaderIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *imageLoaderByIdentifier;
@property (readonly, nonatomic) NSCache *imageCache;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)startCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (void)cancelImageRequest:(long long)a0;
- (void)stopCachingImagesForAllAssets;
- (void)stopCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (id)imageCacheKeyForRequest:(id)a0;
- (id)imageLoaderCoalescingKeyForRequest:(id)a0;
- (id)createImageLoaderForRequest:(id)a0;
- (id)resultForCompletedImageLoader:(id)a0 request:(id)a1 error:(id *)a2;
- (void)_handleImageLoaderCompletionForIdentifier:(id)a0;

@end
