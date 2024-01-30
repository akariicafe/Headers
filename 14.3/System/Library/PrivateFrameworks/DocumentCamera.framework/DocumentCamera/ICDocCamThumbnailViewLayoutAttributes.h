@interface ICDocCamThumbnailViewLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) BOOL renderShadow;
@property (nonatomic) BOOL renderBorder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
