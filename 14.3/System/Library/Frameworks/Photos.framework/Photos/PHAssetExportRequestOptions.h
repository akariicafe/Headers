@class NSString;

@interface PHAssetExportRequestOptions : NSObject

@property (nonatomic) long long locationComparisonStrategy;
@property (nonatomic) BOOL forceDateTimeMetadataBaking;
@property (nonatomic) BOOL forceLocationMetadataBaking;
@property (nonatomic) BOOL forceCaptionMetadataBaking;
@property (nonatomic) BOOL forceAccessibilityDescriptionMetadataBaking;
@property (nonatomic) BOOL includeAllAssetResources;
@property (nonatomic) long long variant;
@property (nonatomic) BOOL treatLivePhotoAsStill;
@property (nonatomic) BOOL flattenSlomoVideos;
@property (nonatomic) BOOL dontAllowRAW;
@property (nonatomic) BOOL shouldStripLocation;
@property (nonatomic) BOOL shouldStripCaption;
@property (nonatomic) BOOL shouldStripAccessibilityDescription;
@property (copy, nonatomic) NSString *videoExportPreset;
@property (copy, nonatomic) NSString *videoExportFileType;
@property (nonatomic) BOOL disableMetadataCorrections;
@property (nonatomic) BOOL shouldBundleComplexAssetResources;
@property (copy, nonatomic) NSString *customFilenameBase;

- (void).cxx_destruct;
- (id)description;

@end
