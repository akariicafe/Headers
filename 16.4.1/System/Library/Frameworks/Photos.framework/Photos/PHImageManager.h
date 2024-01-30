@class PHPhotoLibrary, NSString, NSMapTable;

@interface PHImageManager : NSObject <PHMediaRequestContextDelegate> {
    NSMapTable *_requestContextsByID;
    _Atomic int _nextRequestID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) unsigned long long managerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (BOOL)_allowVideoAccessForAsset:(id)a0 options:(id)a1;
+ (unsigned long long)_nextManagerID;
+ (id)_videoAVObjectBuilderFromVideoURL:(id)a0 info:(id)a1 options:(id)a2 playbackOnly:(BOOL)a3;
+ (void)buildAVAssetFromVideoURL:(id)a0 infoDictionary:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (void)buildAVPlayerItemFromVideoURL:(id)a0 infoDictionary:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (void)buildExportSessionFromVideoURL:(id)a0 infoDictionary:(id)a1 options:(id)a2 exportPreset:(id)a3 completion:(id /* block */)a4;
+ (void)configureAssetCacheInAssetCreationOptionsDictionary:(id)a0;
+ (id)mediaItemURLForAsset:(id)a0 result:(id)a1;
+ (id)playerItemFromVideoMediaItemMakerDataInMediaResult:(id)a0 forAsset:(id)a1;

- (int)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (int)requestAnimatedImageForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestLivePhotoForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (void)cancelImageRequest:(int)a0;
- (void)mediaRequestContext:(id)a0 isQueryingCacheForRequest:(id)a1 didWait:(BOOL *)a2 didFindImage:(BOOL *)a3 resultHandler:(id /* block */)a4;
- (id)init;
- (int)requestURLForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestImageDataForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestPlayerItemForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)additionalWorkForImageRequestCompletedWithResult:(id)a0 request:(id)a1 context:(id)a2;
- (int)requestImageDataAndOrientationForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (BOOL)_canStreamVideoForAsset:(id)a0;
- (void)_prepareLivePhotoResultWithImage:(struct CGImage { } *)a0 uiOrientation:(long long)a1 shouldIncludeVideo:(BOOL)a2 videoURL:(id)a3 info:(id)a4 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5 asset:(id)a6 completion:(id /* block */)a7;
- (int)_requestImagePropertiesFromFileForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)_requestLiveRenderAVAssetForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (void)_runBlockOnAppropriateResultQueueOrSynchronouslyWithRequest:(id)a0 options:(id)a1 block:(id /* block */)a2;
- (BOOL)_shouldUseRAWResourceAsUnadjustedBaseForAsset:(id)a0 options:(id)a1;
- (void)mediaRequestContextDidFinish:(id)a0;
- (int)nextID;
- (int)requestAVAssetForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestAVAssetForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestAVProxyForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestContentEditingInputForAsset:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (int)requestExportSessionForVideo:(id)a0 options:(id)a1 exportPreset:(id)a2 resultHandler:(id /* block */)a3;
- (int)requestImagePropertiesForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestNewCGImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
- (int)runRequestWithContext:(id)a0;
- (id)synchronousImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3;

@end
