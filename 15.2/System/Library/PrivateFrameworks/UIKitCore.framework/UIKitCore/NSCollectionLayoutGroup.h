@class NSArray, NSCollectionLayoutSpacing;

@interface NSCollectionLayoutGroup : NSCollectionLayoutItem <NSCopying> {
    BOOL _hasCheckedIfDecorationItemRequiresRegistration;
}

@property (copy, nonatomic) NSArray *subitems;
@property (nonatomic) long long layoutDirection;
@property (copy, nonatomic) NSArray *visualFormats;
@property (copy, nonatomic) id /* block */ customGroupItemProvider;
@property (copy, nonatomic) id /* block */ itemsProvider;
@property (copy, nonatomic) id /* block */ visualFormatItemProvider;
@property (nonatomic) long long count;
@property (nonatomic) BOOL _hasDecorationItemRequiringRegistration;
@property (nonatomic) long long groupOptions;
@property (copy, nonatomic) NSArray *supplementaryItems;
@property (copy, nonatomic) NSCollectionLayoutSpacing *interItemSpacing;

+ (id)horizontalGroupWithLayoutSize:(id)a0 subitem:(id)a1 count:(long long)a2;
+ (id)layoutGroupWithSize:(id)a0 visualFormats:(id)a1 itemProvider:(id /* block */)a2;
+ (id)verticalGroupWithLayoutSize:(id)a0 subitem:(id)a1 count:(long long)a2;
+ (id)verticalGroupWithLayoutSize:(id)a0 subitems:(id)a1;
+ (id)horizontalGroupWithLayoutSize:(id)a0 subitems:(id)a1;
+ (id)customGroupWithLayoutSize:(id)a0 itemProvider:(id /* block */)a1;
+ (id)verticalGroupWithSize:(id)a0 subitemsProvider:(id /* block */)a1;
+ (id)horizontalGroupWithSize:(id)a0 subitemsProvider:(id /* block */)a1;

- (unsigned long long)layoutAxis;
- (id)visualDescription;
- (id)_externalDescription;
- (BOOL)isCustomGroup;
- (id)_effectiveCopiedSubitemsForSubitems:(id)a0 count:(long long)a1 layoutDirection:(long long)a2;
- (id)description;
- (BOOL)hasVisualFormat;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSize:(id)a0 subitems:(id)a1 count:(long long)a2 interItemSpacing:(id)a3 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a4 edgeSpacing:(id)a5 layoutDirection:(long long)a6 supplementaryItems:(id)a7 visualFormats:(id)a8 itemsProvider:(id /* block */)a9 visualFormatItemProvider:(id /* block */)a10 customGroupItemProvider:(id /* block */)a11 options:(long long)a12 name:(id)a13 identifier:(id)a14;
- (BOOL)hasItemProvider;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isVerticalGroup;
- (BOOL)_isListSolverCompatibleForLayoutAxis:(unsigned long long)a0;
- (id)_effectiveSizeForSize:(id)a0 count:(long long)a1 layoutDirection:(long long)a2;
- (BOOL)isHorizontalGroup;

@end
