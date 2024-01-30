@class NSString, NSArray, PLSpatialOverCaptureInformation, NSMutableArray, PLMutablePTPAsset;
@protocol PLPTPConversionSupport, PLFileManager, PLPTPTransferableAsset;

@interface PLPTPAssetBuilder : NSObject {
    id<PLPTPConversionSupport> _conversionSupport;
    id<PLPTPTransferableAsset> _asset;
    id<PLFileManager> _fileManager;
    NSString *_filenameForPTP;
    PLMutablePTPAsset *_currentPtpAsset;
    PLMutablePTPAsset *_commonPtpAsset;
    PLMutablePTPAsset *_originalPtpAsset;
    NSArray *_sidecarPtpAssets;
    PLMutablePTPAsset *_diagnosticPtpAsset;
    PLMutablePTPAsset *_adjustmentPtpAsset;
    PLMutablePTPAsset *_fullSizeRenderImagePtpAsset;
    PLMutablePTPAsset *_fullSizeRenderVideoPtpAsset;
    PLMutablePTPAsset *_spatialOverCaptureImagePtpAsset;
    PLMutablePTPAsset *_spatialOverCaptureVideoComplementPtpAsset;
    PLMutablePTPAsset *_originalAdjustmentPtpAsset;
    PLSpatialOverCaptureInformation *_cachedSpatialOverCaptureInformation;
    PLMutablePTPAsset *_penultimateImagePtpAsset;
    PLMutablePTPAsset *_penultimateVideoPtpAsset;
    NSMutableArray *_convertedAssets;
    BOOL _irisSidecarRequiresFormatConversion;
}

+ (BOOL)_shouldIncludeDiagnosticFile;
+ (id)pictureTransferProtocolAssetsForAsset:(id)a0 withConversionSupport:(id)a1;

- (id)spatialOverCaptureInformation;
- (void).cxx_destruct;
- (void)_buildGroupUUID;
- (void)_buildTimelapse;
- (void)buildOriginalAdjustmentPtpAsset;
- (id)_assetForSidecar:(id)a0 sidecarPath:(id)a1 irisSidecarPath:(id)a2;
- (void)_buildAdjustmentAsset;
- (void)_buildBurst;
- (void)_buildCommonAsset;
- (void)_buildDeletedFlag;
- (void)_buildDiagnosticAsset;
- (BOOL)_buildDirectoryPathAndFilename;
- (void)_buildExifAvailable;
- (void)_buildFileSize;
- (void)_buildFingerprint;
- (void)_buildFullSizeRenderImageAsset;
- (void)_buildFullSizeRenderVideoAsset;
- (void)_buildGPSInformation;
- (void)_buildImageDimensions;
- (void)_buildModificationAndCreationDate;
- (void)_buildOrientation;
- (BOOL)_buildOriginalAsset;
- (void)_buildOriginatingAssetID;
- (void)_buildPhotoKey;
- (void)_buildRelatedUUID;
- (void)_buildSidecarAssets;
- (void)_buildSlowMo;
- (void)_buildSpatialOverCaptureGroupIdentifier;
- (void)_buildSpatialOverCaptureLivePhotoPairingIdentifier;
- (void)_buildThumbnailDimensions;
- (void)_buildThumbnailOffsetAndLength;
- (void)_durationOfTheAsset;
- (BOOL)_hasIrisSidecarFile;
- (BOOL)_suppressPtpInfo;
- (void)_updateAsset:(id)a0 withConversionResult:(id)a1;
- (void)_updateAssetForTranscodeChoice:(id)a0 withConversionResult:(id)a1;
- (void)_updateOriginalAssetFormatConversionFromVideoComplement;
- (void)buildPenultimateImagePtpAsset;
- (void)buildPenultimateVideoPtpAsset;
- (void)buildSpatialOverCaptureContentPtpAsset;
- (void)buildSpatialOverCaptureVideoComplementPtpAsset;
- (BOOL)hasSpatialOverCaptureContent;
- (id)initWithAsset:(id)a0 conversionSupport:(id)a1;
- (id)initWithAsset:(id)a0 conversionSupport:(id)a1 fileManager:(id)a2;
- (id)pictureTransferProtocolAssets;
- (void)updateAssetForFormatConversion:(id)a0 sourceHints:(id)a1 forceLegacyConversion:(BOOL)a2 assetTypeLabel:(id)a3;
- (void)updateSiblingAssetTypesOnMutablePTPAssets:(id)a0;

@end
