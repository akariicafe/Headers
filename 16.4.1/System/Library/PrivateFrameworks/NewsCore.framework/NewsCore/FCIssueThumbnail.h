@class FCAssetHandle;

@interface FCIssueThumbnail : NSObject

@property (retain, nonatomic) FCAssetHandle *thumbnailAssetHandle;
@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;

+ (id)issueThumbnailWithAssetHandle:(id)a0 thumbnailSize:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;

@end
