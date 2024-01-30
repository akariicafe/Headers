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
+ (id)itemWithLayoutSize:(id)a0 supplementaryItems:(id)a1;
+ (id)itemWithSize:(id)a0 decorationItems:(id)a1;

- (void)_enumerateSupplementaryItemsWithHandler:(id /* block */)a0;
- (BOOL)containsEstimatedSizeItem;
- (void)_enumerateItemsWithHandler:(id /* block */)a0;
- (BOOL)isSupplementary;
- (id)initWithSize:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 edgeSpacing:(id)a2 supplementaryItems:(id)a3 decorationItems:(id)a4 name:(id)a5 identifier:(id)a6;
- (BOOL)isDecoration;
- (BOOL)ignoresRTL;
- (BOOL)isCustomGroup;
- (struct CGSize { double x0; double x1; })_insetSizeForContainer:(id)a0;
- (id)auxillaryItems;
- (BOOL)hasCustomGroupItemProvider;
- (BOOL)isAuxillary;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveContentInsets;
- (BOOL)isGroup;
- (void).cxx_destruct;
- (id)_visualDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
