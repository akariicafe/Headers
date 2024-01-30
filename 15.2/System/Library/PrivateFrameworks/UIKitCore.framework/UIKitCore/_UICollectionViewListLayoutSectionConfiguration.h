@class UIColor, NSArray, UICollectionView, NSString, _UIListSeparatorConfiguration;
@protocol NSCollectionLayoutEnvironment_Private, UITableConstants;

@interface _UICollectionViewListLayoutSectionConfiguration : NSObject <NSCopying>

@property (readonly, weak, nonatomic, getter=_collectionView) UICollectionView *collectionView;
@property (readonly, nonatomic, getter=_layoutEnvironment) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment;
@property (readonly, nonatomic, getter=_constants) id<UITableConstants> constants;
@property (readonly, nonatomic, getter=_separatorConfigurationNoCopy) _UIListSeparatorConfiguration *_separatorConfigurationNoCopy;
@property (readonly, nonatomic, getter=_wantsSwipeActions) BOOL wantsSwipeActions;
@property (nonatomic, getter=_isAPIVersion) BOOL _apiVersion;
@property (copy, nonatomic, getter=_itemHeights, setter=_setItemHeights:) NSArray *itemHeights;
@property (copy, nonatomic) NSString *_headerElementKind;
@property (copy, nonatomic) NSString *_footerElementKind;
@property (retain, nonatomic) UIColor *_backgroundColor;
@property (copy, nonatomic, getter=_itemSeparatorHandler, setter=_setItemSeparatorHandler:) id /* block */ _itemSeparatorHandler;
@property (nonatomic) long long appearanceStyle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL stylesFirstItemAsHeader;
@property (nonatomic) double rowHeight;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) double sectionFooterHeight;
@property (nonatomic) double estimatedRowHeight;
@property (nonatomic) double estimatedSectionHeaderHeight;
@property (nonatomic) double estimatedSectionFooterHeight;
@property (nonatomic) double headerTopPadding;
@property (copy, nonatomic, getter=_separatorConfiguration, setter=_setSeparatorConfiguration:) _UIListSeparatorConfiguration *_separatorConfiguration;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } separatorInset;
@property (copy, nonatomic) id /* block */ separatorInsetProvider;
@property (copy, nonatomic) id /* block */ leadingSwipeActionsConfigurationProvider;
@property (copy, nonatomic) id /* block */ trailingSwipeActionsConfigurationProvider;
@property (copy, nonatomic) id /* block */ willBeginSwipingHandler;
@property (copy, nonatomic) id /* block */ didEndSwipingHandler;

+ (id)new;

- (double)_defaultSectionHeaderHeight;
- (double)_defaultSectionFooterHeight;
- (void)_addSupplementaryItemsToLayout:(id)a0;
- (BOOL)_shouldDrawThickSeparators;
- (double)_topContentInsetForGroupedAppearance;
- (id)_generateLayoutGroup:(id)a0;
- (id)_traitCollection;
- (BOOL)_hasHeaderOrFirstItemStyledAsHeader;
- (long long)_defaultContentInsetsReference;
- (double)_effectiveEstimatedRowHeight;
- (double)_separatorHeight;
- (id)initWithCollectionView:(id)a0;
- (id)_createSeparatorForBottom:(BOOL)a0;
- (BOOL)_shouldPinSupplementaries;
- (id)initWithAppearanceStyle:(long long)a0 layoutEnvironment:(id)a1;
- (BOOL)_shouldSupplementariesFollowSectionInsets;
- (BOOL)_usesSectionBackgroundDecoration;
- (double)_topContentInsetForPaddingAboveHeader;
- (id)_createSwipeActionsContainer;
- (void).cxx_destruct;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionContentInsetsForAppearanceStyleWithDefaultInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)init;
- (double)_defaultRowHeight;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)_effectiveEstimatedSectionFooterHeight;
- (long long)_defaultSeparatorStyleForAppearanceStyle:(long long)a0;
- (double)_effectiveEstimatedSectionHeaderHeight;
- (BOOL)_hasFooter;
- (BOOL)_hasSupplementaryAsHeader;

@end
