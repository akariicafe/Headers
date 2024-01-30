@class NSArray, ICCameraFile;

@interface PHImportDeviceAsset : PHImportAsset {
    ICCameraFile *_cameraFile;
}

@property (readonly, nonatomic) NSArray *cameraFiles;

+ (id)assetFileForFile:(id)a0 source:(id)a1;
+ (void)validateCameraFile:(id)a0;

- (BOOL)isSloMo;
- (id)assetId;
- (BOOL)isRAW;
- (BOOL)isBase;
- (id)creationDate;
- (BOOL)canPreserveFolderStructure;
- (id)nameKey;
- (int)burstPickType;
- (BOOL)isTagged;
- (void)loadMetadataAsync:(id /* block */)a0;
- (BOOL)canDelete;
- (id)durationTimeInterval;
- (void)thumbnailUsingRequest:(id)a0 atEnd:(id /* block */)a1;
- (BOOL)containsDateKey:(id)a0;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)originatingAssetID;
- (void)loadMetadataSync;
- (BOOL)isRender;
- (id)spatialOverCaptureIdentifier;
- (id)initWithSource:(id)a0 cameraFile:(id)a1 type:(id)a2 supportedMediaType:(unsigned char)a3;
- (BOOL)performAdditionalLivePhotoChecksWithImageAsset:(id)a0;
- (id)createMetadataFromProperties:(id)a0;
- (BOOL)isSpatialOverCapture;
- (BOOL)canReference;
- (id)representedObject;
- (id)burstUUID;
- (struct CGSize { double x0; double x1; })unorientedPixelSize;
- (id)parentFolderPath;
- (id)livePhotoPairingIdentifier;
- (BOOL)isViewable;
- (BOOL)hasAudioAttachment;
- (BOOL)isLivePhoto;

@end
