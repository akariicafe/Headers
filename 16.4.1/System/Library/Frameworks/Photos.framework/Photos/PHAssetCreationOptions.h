@class PHAssetCreationMetadataCopyOptions, PHAssetCreationAdjustmentBakeInOptions;

@interface PHAssetCreationOptions : NSObject

@property (nonatomic) BOOL crashBeforeCreation;
@property (nonatomic) BOOL shouldDownloadOrCloudReReferenceMissingResources;
@property (copy, nonatomic) PHAssetCreationAdjustmentBakeInOptions *adjustmentBakeInOptions;
@property (copy, nonatomic) PHAssetCreationMetadataCopyOptions *metadataCopyOptions;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillSourceTime;
@property (nonatomic) BOOL resetUserSpecificMetadata;
@property (nonatomic) BOOL copyStillPhotoFromLivePhoto;
@property (nonatomic) BOOL copyOriginal;
@property (nonatomic) BOOL copySinglePhotoFromBurst;
@property (nonatomic) BOOL copyAsAlternateAsset;
@property (nonatomic) BOOL useRecoverableStagingDirectory;
@property (nonatomic) BOOL shouldCreateScreenshot;

- (id)init;
- (void).cxx_destruct;

@end
