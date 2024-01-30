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
@property (nonatomic) long long appearanceStyle;
@property (nonatomic) BOOL stylesFirstItemAsHeader;
@property (nonatomic) double rowHeight;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) double sectionFooterHeight;
@property (nonatomic) double estimatedRowHeight;
@property (nonatomic) double estimatedSectionHeaderHeight;
@property (nonatomic) double estimatedSectionFooterHeight;
@property (copy, nonatomic, getter=_separatorConfiguration, setter=_setSeparatorConfiguration:) _UIListSeparatorConfiguration *_separatorConfiguration;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } separatorInset;
@property (copy, nonatomic) id /* block */ separatorInsetProvider;
@property (copy, nonatomic) id /* block */ leadingSwipeActionsConfigurationProvider;
@property (copy, nonatomic) id /* block */ trailingSwipeActionsConfigurationProvider;
@property (copy, nonatomic) id /* block */ willBeginSwipingHandler;
@property (copy, nonatomic) id /* block */ didEndSwipingHandler;

+ (id)new;

- (double)_separatorHeight;
- (id)initWithCollectionView:(id)a0;
- (double)_effectiveEstimatedSectionHeaderHeight;
- (BOOL)_hasFooter;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_usesSectionBackgroundDecoration;
- (void)_addSupplementaryItemsToLayout:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)_defaultSectionHeaderHeight;
- (id)_createSeparatorForBottom:(BOOL)a0;
- (BOOL)_shouldSupplementariesFollowSectionInsets;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionContentInsetsForAppearanceStyleWithDefaultInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (double)_defaultRowHeight;
- (double)_defaultSectionFooterHeight;
- (id)_generateLayoutGroup:(id)a0;
- (BOOL)_hasHeaderOrFirstItemStyledAsHeader;
- (id)_traitCollection;
- (double)_effectiveEstimatedRowHeight;
- (id)initWithAppearanceStyle:(long long)a0 layoutEnvironment:(id)a1;
- (BOOL)_shouldDrawThickSeparators;
- (double)_effectiveEstimatedSectionFooterHeight;
- (id)_createSwipeActionsContainer;
- (long long)_defaultContentInsetsReference;
- (long long)_defaultSeparatorStyleForAppearanceStyle:(long long)a0;
- (BOOL)_shouldPinSupplementaries;

@end
