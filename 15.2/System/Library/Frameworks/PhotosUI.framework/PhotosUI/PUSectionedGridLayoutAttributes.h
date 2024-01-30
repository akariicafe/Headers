@interface PUSectionedGridLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) BOOL floating;
@property (nonatomic) double interactiveTransitionProgress;
@property (nonatomic) BOOL extendsTopContent;
@property (nonatomic) BOOL exists;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
