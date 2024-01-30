@interface ALAssetsLibrary : NSObject

@property (retain, nonatomic) id internal;

+ (id)_library;
+ (long long)authorizationStatus;
+ (id)_albumsInLibrary:(id)a0;
+ (void)disableSharedPhotoStreamsSupport;
+ (BOOL)_linkedBefore7;
+ (struct CGImage { } *)_thumbnailForAssetURL:(id)a0;
+ (struct CGImage { } *)_aspectRatioThumbnailForAssetURL:(id)a0;
+ (id)_filePathForVideoURL:(id)a0 outMetadata:(id *)a1;
+ (long long)_estimatedOutputFileLengthForVideoURL:(id)a0 fallbackFilePath:(id)a1 exportPreset:(id)a2 exportProperties:(id)a3;
+ (long long)_estimatedOutputFileLengthForVideoFilePath:(id)a0 metadata:(id)a1 exportPreset:(id)a2 exportProperties:(id)a3;
+ (id)_exportSessionForVideoURL:(id)a0 fallbackFilePath:(id)a1 exportPreset:(id)a2;
+ (id)_exportSessionForVideoFilePath:(id)a0 metadata:(id)a1 exportPreset:(id)a2;
+ (id)_playerItemForVideoURL:(id)a0 fallbackFilePath:(id)a1;
+ (id)_playerItemForVideoFilePath:(id)a0 metadata:(id)a1;

- (void)_performBlock:(id /* block */)a0;
- (void)checkPhotosAccessAllowedWithScope:(long long)a0 handler:(id /* block */)a1;
- (void)_performBlockAndWait:(id /* block */)a0;
- (id)init;
- (void)assetForURL:(id)a0 resultBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)dealloc;
- (BOOL)isValid;
- (void)registerAlbum:(id)a0 assetGroupPrivate:(id)a1;
- (id)publicErrorFromPrivateError:(id)a0;
- (id)publicErrorForPrivateDomain:(id)a0 withPrivateCode:(long long)a1;
- (void)_addGroupForAlbum:(id)a0 ofType:(unsigned long long)a1 toArray:(id)a2;
- (void)_setBundlePropertiesOnPropertiesDictionary:(id)a0;
- (void)enumerateGroupsWithTypes:(unsigned long long)a0 usingBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)_writeImageToSavedPhotosAlbum:(struct CGImage { } *)a0 orientation:(long long)a1 imageData:(id)a2 metadata:(id)a3 internalProperties:(id)a4 completionBlock:(id /* block */)a5;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage { } *)a0 orientation:(long long)a1 completionBlock:(id /* block */)a2;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage { } *)a0 metadata:(id)a1 completionBlock:(id /* block */)a2;
- (void)writeImageDataToSavedPhotosAlbum:(id)a0 metadata:(id)a1 completionBlock:(id /* block */)a2;
- (void)_writeVideoAtPathToSavedPhotosAlbum:(id)a0 internalProperties:(id)a1 completionBlock:(id /* block */)a2;
- (void)writeVideoAtPathToSavedPhotosAlbum:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)videoAtPathIsCompatibleWithSavedPhotosAlbum:(id)a0;
- (id)_copyGroupForURL:(id)a0;
- (void)groupForURL:(id)a0 resultBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)addAssetsGroupAlbumWithName:(id)a0 resultBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;

@end
