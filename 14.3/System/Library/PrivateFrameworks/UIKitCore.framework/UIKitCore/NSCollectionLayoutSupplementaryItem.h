@class NSString, NSCollectionLayoutAnchor;

@interface NSCollectionLayoutSupplementaryItem : NSCollectionLayoutItem <NSCopying>

@property (retain, nonatomic) NSString *elementKind;
@property (retain, nonatomic) NSCollectionLayoutAnchor *containerAnchor;
@property (retain, nonatomic) NSCollectionLayoutAnchor *itemAnchor;
@property (nonatomic) long long zIndex;

+ (id)supplementaryItemWithLayoutSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2 itemAnchor:(id)a3;
+ (id)supplementaryItemWithLayoutSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2;

- (id)item;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)supplementaryItem;
- (id)initWithSize:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 elementKind:(id)a2 containerAnchor:(id)a3 itemAnchor:(id)a4 zIndex:(long long)a5;
- (id)boundarySupplementaryItem;
- (BOOL)isEqual:(id)a0;
- (id)decorationItem;

@end
