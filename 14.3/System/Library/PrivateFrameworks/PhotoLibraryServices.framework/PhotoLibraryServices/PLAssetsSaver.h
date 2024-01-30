@class NSMutableArray, NSMutableDictionary;

@interface PLAssetsSaver : NSObject {
    NSMutableDictionary *_inProgressAvalancheFds;
}

@property (retain, nonatomic) NSMutableArray *_pendingSaveAssetJobs;

+ (id)publicAssetsLibraryErrorFromPrivateDomain:(id)a0 withPrivateCode:(long long)a1;
+ (id)publicAssetsLibraryErrorFromPrivateError:(id)a0;
+ (id)sharedAssetsSaver;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deletePhotoStreamDataForStreamID:(id)a0;
- (id)_photoLibrary;
- (void)_setIsTakingPhoto:(BOOL)a0;
- (id)requestSynchronousImageForAssetOID:(id)a0 withFormat:(int)a1 allowPlaceholder:(BOOL)a2 wantURLOnly:(BOOL)a3 networkAccessAllowed:(BOOL)a4 trackCPLDownload:(BOOL)a5 outImageDataInfo:(id *)a6 outCPLDownloadContext:(id *)a7;
- (id)_saveIsolationQueue;
- (void)requestAsynchronousImageForAssetOID:(id)a0 withFormat:(int)a1 allowPlaceholder:(BOOL)a2 wantURLOnly:(BOOL)a3 networkAccessAllowed:(BOOL)a4 trackCPLDownload:(BOOL)a5 completionBlock:(id /* block */)a6;
- (void)queuePhotoStreamJobDictionary:(id)a0;
- (id)_assetsdClientForJobDictionary:(id)a0;
- (void)_queueJobDictionary:(id)a0 asset:(id)a1 requestEnqueuedBlock:(id /* block */)a2 completionBlock:(id /* block */)a3 imageSurface:(struct __IOSurface { } *)a4 previewImageSurface:(struct __IOSurface { } *)a5;
- (void)_queueJobDictionary:(id)a0 completionBlock:(id /* block */)a1;
- (void)_saveImage:(id)a0 imageData:(id)a1 properties:(id)a2 completionBlock:(id /* block */)a3;
- (id)_addCameraAssetToLibraryWithPath:(id)a0 thumbnailImage:(id)a1 assetUUID:(id)a2 metadata:(id)a3 assetType:(short)a4 kind:(short)a5 kindSubtype:(short)a6 avalancheUUID:(id)a7 completionHandler:(id /* block */)a8;
- (void)saveImageRef:(struct CGImage { } *)a0 orientation:(long long)a1 imageData:(id)a2 properties:(id)a3 completionBlock:(id /* block */)a4;
- (void)saveCameraImage:(id)a0 metadata:(id)a1 additionalProperties:(id)a2 requestEnqueuedBlock:(id /* block */)a3;
- (id)saveCameraImage:(id)a0 metadata:(id)a1 additionalProperties:(id)a2 diagnostics:(id)a3 previouslyPendingAsset:(id)a4 requestEnqueuedBlock:(id /* block */)a5;
- (void)saveCameraVideoAtPath:(id)a0 withMetadata:(id)a1 thumbnailImage:(id)a2 createPreviewWellImage:(BOOL)a3 progressStack:(id)a4 isSlalom:(BOOL)a5 assetAdjustments:(id)a6 videoHandler:(id /* block */)a7 requestEnqueuedBlock:(id /* block */)a8 completionBlock:(id /* block */)a9;
- (void)regenerateVideoThumbnailsForVideo:(id)a0 withCreationDate:(id)a1 progressStack:(id)a2 completionBlock:(id /* block */)a3;
- (void)saveCameraAvalancheWithUUID:(id)a0 allAssetUUIDs:(id)a1 allAssets:(id)a2 stackAsset:(id)a3 completionBlock:(id /* block */)a4;
- (id /* block */)_createWriteImageCompletionBlockWithImage:(id)a0 target:(id)a1 selector:(SEL)a2 contextInfo:(void *)a3;
- (id /* block */)_createWriteVideoCompletionBlockWithVideoPath:(id)a0 target:(id)a1 selector:(SEL)a2 contextInfo:(void *)a3;
- (void)_saveVideoAtPath:(id)a0 properties:(id)a1 completionBlock:(id /* block */)a2;
- (void)saveImage:(id)a0 properties:(id)a1 completionBlock:(id /* block */)a2;
- (void)saveImageData:(id)a0 properties:(id)a1 completionBlock:(id /* block */)a2;
- (void)saveImage:(id)a0 imageData:(id)a1 properties:(id)a2 completionTarget:(id)a3 completionSelector:(SEL)a4 contextInfo:(void *)a5;
- (void)saveSyncedAssets:(id)a0 completionBlock:(id /* block */)a1;
- (void)saveVideoAtPath:(id)a0 properties:(id)a1 completionBlock:(id /* block */)a2;
- (void)saveVideoAtPath:(id)a0 properties:(id)a1 completionTarget:(id)a2 completionSelector:(SEL)a3 contextInfo:(void *)a4;
- (void)savePhotoStreamImage:(id)a0 imageData:(id)a1 properties:(id)a2 completionBlock:(id /* block */)a3;
- (void)deletePhotoStreamAssetsWithUUIDs:(id)a0 streamID:(id)a1;
- (void)reenqueueAssetUUIDsForPhotoStreamPublication:(id)a0;
- (id)validateAvalanches:(id)a0 inLibraryWithURL:(id)a1;

@end
