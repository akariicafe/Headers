@class CPLMomentSharePreviewData, NSArray, NSString, NSData, PHAsset;

@interface PHMomentSharePreview : NSObject {
    CPLMomentSharePreviewData *_previewData;
}

@property (copy, nonatomic) NSData *thumbnailImageData;
@property (copy, nonatomic) NSArray *previewImageData;
@property (copy, nonatomic) PHAsset *keyAsset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (readonly, nonatomic) NSString *keyAssetIdentifier;
@property (copy, nonatomic) NSArray *curatedAssetIdentifiers;

- (id)description;
- (void).cxx_destruct;
- (id)initWithThumbnailImageData:(id)a0 previewData:(id)a1;

@end
