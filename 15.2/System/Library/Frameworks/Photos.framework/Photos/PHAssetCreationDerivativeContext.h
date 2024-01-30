@class NSString, NSArray, NSURL, NSData, PLThumbnailManager, PLManagedAsset;

@interface PHAssetCreationDerivativeContext : NSObject

@property (nonatomic) long long nextAvailableThumbnailIndex;
@property (retain, nonatomic) PLThumbnailManager *thumbnailManager;
@property (nonatomic) BOOL thumbnailWriteSucceeded;
@property (copy, nonatomic) NSString *thumbnailIdentifier;
@property (retain, nonatomic) NSURL *fileURLForThumbnailFile;
@property (retain, nonatomic) NSData *originalHash;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (copy, nonatomic) NSString *assetUUID;
@property (nonatomic) short assetKind;
@property (copy, nonatomic) NSString *originalUTI;
@property (nonatomic) long long assetOrientation;
@property (nonatomic) struct CGSize { double width; double height; } assetOrientedImageSize;
@property (nonatomic) struct CGSize { double width; double height; } embeddedThumbnailSize;
@property (nonatomic) long long maxPixelSize;
@property (copy, nonatomic) NSString *assetExtension;
@property (retain, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *fullsizeRenderImagePath;
@property (copy, nonatomic) NSString *pathForOriginalFile;
@property (copy, nonatomic) NSString *pathForVideoPreviewFile;
@property (copy, nonatomic) NSString *fullsizeRenderVideoPath;
@property (retain, nonatomic) NSArray *auxiliaryImageRecords;

- (void).cxx_destruct;

@end
