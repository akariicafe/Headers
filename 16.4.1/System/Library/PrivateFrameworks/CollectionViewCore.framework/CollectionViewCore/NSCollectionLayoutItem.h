@class NSUUID, NSString, NSArray, NSCollectionLayoutSize, NSCollectionLayoutEdgeSpacing;

@interface NSCollectionLayoutItem : NSObject <NSCopying> {
    BOOL _containsEstimatedSizeItem;
}

@property (copy, nonatomic) NSCollectionLayoutSize *size;
@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSArray *decorationItems;
@property (nonatomic) BOOL hasComputedContainsEstimatedItem;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (copy, nonatomic) NSCollectionLayoutEdgeSpacing *edgeSpacing;
@property (readonly, nonatomic) NSCollectionLayoutSize *layoutSize;

+ (id)itemWithLayoutSize:(id)a0;
+ (id)itemWithSize:(id)a0 decorationItems:(id)a1;
+ (id)itemWithLayoutSize:(id)a0 supplementaryItems:(id)a1;

- (BOOL)isGroup;
- (BOOL)isCustomGroup;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveContentInsets;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_externalDescription;
- (void).cxx_destruct;
- (void)_enumerateItemsWithHandler:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })_insetSizeForContainer:(id)a0 displayScale:(double)a1;
- (BOOL)containsEstimatedSizeItem;
- (BOOL)hasCustomGroupItemProvider;
- (BOOL)ignoresRTL;
- (id)initWithSize:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 edgeSpacing:(id)a2 supplementaryItems:(id)a3 decorationItems:(id)a4 name:(id)a5 identifier:(id)a6;
- (BOOL)isSupplementary;
- (void)_enumerateSupplementaryItemsWithHandler:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })_insetSizeForContainer:(id)a0;
- (id)auxillaryItems;
- (BOOL)isAuxillary;
- (BOOL)isDecoration;

@end
