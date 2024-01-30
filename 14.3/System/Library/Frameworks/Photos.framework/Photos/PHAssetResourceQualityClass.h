@class PLImageFormat;

@interface PHAssetResourceQualityClass : NSObject

@property (retain, nonatomic) PLImageFormat *backingImageFormat;
@property (nonatomic) unsigned long long backingCPLResourceType;
@property (readonly, nonatomic, getter=isVideo) BOOL video;
@property (readonly, nonatomic, getter=isCroppedToSquare) BOOL croppedToSquare;
@property (readonly, nonatomic, getter=isTable) BOOL table;
@property (readonly, nonatomic, getter=isThumbnail) BOOL thumbnail;
@property (readonly, nonatomic) unsigned long long maxSideLengthIfSquare;
@property (readonly, nonatomic) unsigned long long maxNumberOfPixelsIfSquare;

+ (id)_cplDerivativeAssetResourceQualityClasses;
+ (id)anyQualityClassMatchingPredicate:(id)a0;
+ (id)allQualityClassesMatchingPredicate:(id)a0;
+ (id)assetResourceQualityClasses;
+ (id)_thumbnailAssetResourceQualityClassesForCurrentDevice;

- (id)initWithCPLResourceType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)tableThumbnailDataForAsset:(id)a0 dataSpecification:(struct PHAssetResourceTableDataSpecification { int x0; int x1; int x2; int x3; int x4; int x5; } *)a1;
- (id)description;
- (id)initWithThumbnailFormat:(id)a0;
- (long long)_compare:(id)a0;
- (void)preheatDataForThumbnailIndexes:(id)a0 inLibrary:(id)a1;

@end
