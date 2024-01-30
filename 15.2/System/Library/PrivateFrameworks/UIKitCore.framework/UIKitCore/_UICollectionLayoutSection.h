@class NSArray, NSIndexSet, _UICollectionLayoutGroup;

@interface _UICollectionLayoutSection : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {
    _UICollectionLayoutGroup *_layoutGroup;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (nonatomic) double interGroupSpacing;
@property (nonatomic) long long orthogonalScrollingBehavior;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (nonatomic) BOOL supplementariesFollowContentInsets;
@property (copy, nonatomic) id /* block */ visibleItemsTransformer;
@property (copy, nonatomic) NSArray *decorationItems;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes;

+ (id)layoutSectionWithLayoutGroup:(id)a0;

- (id)initWithLayoutGroup:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 interGroupSpacing:(double)a2 orthogonalScrollingBehavior:(long long)a3 boundarySupplementaryItems:(id)a4 supplementariesFollowContentInsets:(BOOL)a5 visibleItemsTransformer:(id /* block */)a6 decorationItems:(id)a7 supplementaryItems:(id)a8 pinnedSupplementaryItemIndexes:(id)a9;
- (id)_apiRepresentation;
- (void).cxx_destruct;
- (id)initWithLayoutGroup:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
