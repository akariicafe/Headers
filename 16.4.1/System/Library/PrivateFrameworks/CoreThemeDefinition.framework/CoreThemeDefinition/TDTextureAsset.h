@class NSSet;

@interface TDTextureAsset : TDAsset

@property (retain, nonatomic) NSSet *renditions;
@property (nonatomic) int exifOrientation;

- (void)_logError:(id)a0;
- (struct CGSize { double x0; double x1; })sourceImageSizeWithDocument:(id)a0;
- (id)sourceImageWithDocument:(id)a0;

@end
