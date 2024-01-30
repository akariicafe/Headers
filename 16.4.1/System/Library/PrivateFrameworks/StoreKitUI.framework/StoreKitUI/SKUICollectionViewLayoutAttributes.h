@class UIColor;

@interface SKUICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>

@property (nonatomic, getter=_zoomingImageLambda, setter=_setZoomingImageLambda:) double zoomingImageLambda;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long position;
@property (nonatomic) double zoomingImageAlpha;
@property (nonatomic) double zoomingImageWidth;
@property (nonatomic) double zoomingImageImposedAlphaOfOtherViews;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
