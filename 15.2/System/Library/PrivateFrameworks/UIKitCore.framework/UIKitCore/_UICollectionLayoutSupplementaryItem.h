@class NSString, _UICollectionLayoutAnchor, _UICollectionLayoutEdgeSpacing;

@interface _UICollectionLayoutSupplementaryItem : _UICollectionLayoutItem <NSCopying, _UICollectionLayoutAPIRespresenting> {
    _UICollectionLayoutEdgeSpacing *_edgeSpacing;
    NSString *_name;
}

@property (nonatomic) long long zIndex;
@property (readonly, nonatomic) NSString *elementKind;
@property (readonly, nonatomic) _UICollectionLayoutAnchor *containerAnchor;
@property (readonly, nonatomic) _UICollectionLayoutAnchor *itemAnchor;
@property (nonatomic) BOOL canAdjustContentSize;

+ (id)supplementaryItemWithSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2;
+ (id)supplementaryItemWithSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2 itemAnchor:(id)a3;

- (id)initWithSize:(id)a0 elementKind:(id)a1 zIndex:(long long)a2 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a3 containerAnchor:(id)a4 itemAnchor:(id)a5 edgeSpacing:(id)a6 name:(id)a7 canAdjustContentSize:(BOOL)a8;
- (id)_apiRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
