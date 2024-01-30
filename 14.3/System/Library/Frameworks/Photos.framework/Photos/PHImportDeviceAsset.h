@class NSArray, ICCameraFile;

@interface PHImportDeviceAsset : PHImportAsset {
    ICCameraFile *_cameraFile;
}

@property (readonly, nonatomic) NSArray *cameraFiles;

+ (id)assetFileForFile:(id)a0 source:(id)a1;
+ (void)validateCameraFile:(id)a0;

- (struct CGSize { double x0; double x1; })imageSize;
- (id)assetId;
- (BOOL)canReference;
- (BOOL)hasAdjustments;
- (BOOL)isRAW;
- (void)loadMetadataSync;
- (id)originatingAssetID;
- (id)exifImageDate;
- (BOOL)canPreserveFolderStructure;
- (id)parentFolderPath;
- (BOOL)hasAudioAttachment;
- (BOOL)isViewable;
- (int)burstPickType;
- (id)mediaGroupId;
- (void)loadMetadataAsync:(id /* block */)a0;
- (void)thumbnailUsingRequest:(id)a0 atEnd:(id /* block */)a1;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isBase;
- (id)representedObject;
- (BOOL)canDelete;
- (id)spatialOverCaptureIdentifier;
- (id)duration;
- (BOOL)isRender;
- (BOOL)isTagged;
- (id)initWithSource:(id)a0 cameraFile:(id)a1 uti:(id)a2 supportedType:(unsigned char)a3;
- (BOOL)containsDateKey:(id)a0;
- (BOOL)performAdditionalLivePhotoChecksWithImageAsset:(id)a0;
- (id)createMetadataFromProperties:(id)a0;
- (BOOL)isSpatialOverCapture;
- (BOOL)isLivePhoto;
- (BOOL)isSloMo;
- (id)burstUUID;

@end
