@interface PUCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) struct CGPoint { double x; double y; } parallaxOffset;
@property (nonatomic) struct CGPoint { double x; double y; } edgeParallaxOffset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
