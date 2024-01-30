@class PHImageCache, NSString, NSMutableSet, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PHCachingImageManager : PHImageManager <PHImageCacheDelegate> {
    NSMutableSet *_cachingRequestIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachingLock;
    PHImageCache *_imageCache;
    BOOL _imageCacheCommitScheduled;
    NSObject<OS_dispatch_queue> *_serialQueue;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_source> *_memoryEventSource;
}

@property (nonatomic) BOOL allowsCachingHighQualityImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_chooseImageTableFormatForPreheatingFromFormats:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 returnBestTableRegardlessOfFit:(BOOL)a3;

- (id)init;
- (void)mediaRequestContext:(id)a0 isQueryingCacheForRequest:(id)a1 didWait:(BOOL *)a2 didFindImage:(BOOL *)a3 resultHandler:(id /* block */)a4;
- (void)_commitCacheChanges;
- (void).cxx_destruct;
- (void)_handleCachingImageRequestResult:(id)a0 request:(id)a1 context:(id)a2;
- (void)stopCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (void)additionalWorkForImageRequestCompletedWithResult:(id)a0 request:(id)a1 context:(id)a2;
- (id)_cacheFailReasonFromInfo:(id)a0;
- (void)stopCachingImagesForAllAssets;
- (void)imageCache:(id)a0 didEvictCacheEntry:(id)a1;
- (id)_imageTableForPreheatingDegradedOpportunisticRequestsWithPhotoLibrary:(id)a0;
- (void)_preheatImageTable:(id)a0 forAssets:(id)a1;
- (id)_tableFormats;
- (BOOL)_canPopulateCacheForResult:(id)a0;
- (void)_handleMemoryWarning;
- (void)startCachingImagesForAssets:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;
- (BOOL)_cacheImageResult:(id)a0 forRequest:(id)a1;
- (void)_scheduleOrCommitCacheChangesIfNeeded;

@end
