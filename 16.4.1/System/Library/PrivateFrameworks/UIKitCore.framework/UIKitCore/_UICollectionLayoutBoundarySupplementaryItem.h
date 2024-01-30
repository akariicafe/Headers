@class NSString;

@interface _UICollectionLayoutBoundarySupplementaryItem : _UICollectionLayoutSupplementaryItem <NSCopying, _UICollectionLayoutAPIRespresenting> {
    NSString *_elementKind;
}

@property (nonatomic) BOOL extendsBoundary;
@property (nonatomic) BOOL pinToVisibleBounds;
@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } offset;

+ (id)boundarySupplementaryItemWithSize:(id)a0 elementKind:(id)a1 alignment:(long long)a2 offset:(struct CGPoint { double x0; double x1; })a3;
+ (id)boundarySupplementaryItemWithSize:(id)a0 elementKind:(id)a1 alignment:(long long)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_apiRepresentation;
- (id)initWithSize:(id)a0 elementKind:(id)a1 alignment:(long long)a2 offset:(struct CGPoint { double x0; double x1; })a3 zIndex:(long long)a4 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a5 extendsBoundary:(BOOL)a6 pinToVisibleBounds:(BOOL)a7;

@end
