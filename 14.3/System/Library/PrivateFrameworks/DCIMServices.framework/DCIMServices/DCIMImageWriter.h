@interface DCIMImageWriter : NSObject

+ (id)recordedVideoPathForFilteredLivePhotoVideoPath:(id)a0;
+ (id)filteredVideoPathForRecordedLivePhotoVideoPath:(id)a0;
+ (id)uniqueIncomingPathForAssetWithUUID:(id)a0 andExtension:(id)a1 isPhotoStream:(BOOL)a2;
+ (BOOL)isLivePhotoFilteredVideoPath:(id)a0;
+ (id)defaultFileExtensionForAssetType:(short)a0;
+ (id)sharedDCIMWriter;
+ (void)writeableDataForImageData:(id)a0 imageUTIType:(struct __CFString { } *)a1 thumbnailDataOut:(id *)a2 imageUTITypeOut:(id *)a3 exifPropertiesOut:(id *)a4 isJPEGOut:(BOOL *)a5 imageDataOut:(id *)a6;
+ (id)preferredFileExtensionForType:(id)a0;
+ (id)incomingDirectoryPathForPhotoStream;
+ (void)writeableDataForImage:(id)a0 previewImage:(id)a1 imageData:(id)a2 imageUTIType:(struct __CFString { } *)a3 exifProperties:(id)a4 imageOrientation:(long long)a5 thumbnailDataOut:(id *)a6 imageUTITypeOut:(id *)a7 exifPropertiesOut:(id *)a8 isJPEGOut:(BOOL *)a9 imageDataOut:(id *)a10;
+ (id)incomingDirectoryPath;

- (BOOL)saveImageJobToDisk:(id)a0;
- (int)copyPrimaryFormatImageData:(id)a0 toURL:(id)a1 properties:(id)a2;
- (BOOL)writeJPEGToURL:(id)a0 withData:(id)a1 thumbnail:(id)a2 properties:(id)a3;
- (id)_cameraAssetExtensionForType:(short)a0;
- (BOOL)_writeJPEGToURL:(id)a0 withData:(id)a1 thumbnail:(id)a2 properties:(id)a3 duringBurst:(BOOL)a4;
- (void)_writeJPEGFromIOSurface:(struct __IOSurface { } *)a0 toPath:(id)a1 orientation:(long long)a2;

@end
