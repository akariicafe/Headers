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

- (id)_externalDescription;
- (id)auxillaryItems;
- (BOOL)isSupplementary;
- (void)_enumerateItemsWithHandler:(id /* block */)a0;
- (void)_enumerateSupplementaryItemsWithHandler:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })_insetSizeForContainer:(id)a0;
- (BOOL)isCustomGroup;
- (BOOL)hasCustomGroupItemProvider;
- (BOOL)isGroup;
- (BOOL)isAuxillary;
- (BOOL)isDecoration;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_effectiveContentInsets;
- (BOOL)ignoresRTL;
- (id)_visualDescription;
- (id)initWithSize:(id)a0 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 edgeSpacing:(id)a2 supplementaryItems:(id)a3 decorationItems:(id)a4 name:(id)a5 identifier:(id)a6;
- (BOOL)containsEstimatedSizeItem;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
