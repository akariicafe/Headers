@interface DCIMImageWriter : NSObject

+ (BOOL)isLivePhotoFilteredVideoPath:(id)a0;
+ (id)incomingDirectoryPath;
+ (id)recordedVideoPathForFilteredLivePhotoVideoPath:(id)a0;
+ (void)writeableDataForImageData:(id)a0 imageUTIType:(id)a1 thumbnailDataOut:(id *)a2 imageUTITypeOut:(id *)a3 exifPropertiesOut:(id *)a4 isJPEGOut:(BOOL *)a5 imageDataOut:(id *)a6;
+ (id)incomingDirectoryPathForPhotoStream;
+ (short)savedAssetTypeForPhotoBoothAsset;
+ (id)filteredVideoPathForRecordedLivePhotoVideoPath:(id)a0;
+ (void)writeableDataForImage:(id)a0 previewImage:(id)a1 imageData:(id)a2 imageUTIType:(id)a3 exifProperties:(id)a4 imageOrientation:(long long)a5 thumbnailDataOut:(id *)a6 imageUTITypeOut:(id *)a7 exifPropertiesOut:(id *)a8 isJPEGOut:(BOOL *)a9 imageDataOut:(id *)a10;
+ (id)sharedDCIMWriter;
+ (id)preferredFileExtensionForType:(id)a0;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)a0 andExtension:(id)a1 isPhotoStream:(BOOL)a2;
+ (short)savedAssetTypeForCameraCapturedAsset;
+ (id)defaultFileExtensionForAssetType:(short)a0;

- (BOOL)saveImageJobToDisk:(id)a0;
- (int)copyPrimaryFormatImageData:(id)a0 toURL:(id)a1 properties:(id)a2;
- (BOOL)writeJPEGToURL:(id)a0 withData:(id)a1 thumbnail:(id)a2 properties:(id)a3;
- (id)_cameraAssetExtensionForType:(short)a0;
- (BOOL)_writeJPEGToURL:(id)a0 withData:(id)a1 thumbnail:(id)a2 properties:(id)a3 duringBurst:(BOOL)a4;
- (void)_writeJPEGFromIOSurface:(struct __IOSurface { } *)a0 toPath:(id)a1 orientation:(long long)a2;

@end
