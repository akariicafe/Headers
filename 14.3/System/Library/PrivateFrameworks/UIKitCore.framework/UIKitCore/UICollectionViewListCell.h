@class UIView, NSString, NSArray, UICellAccessoryManager, NSDictionary, UILayoutGuide, NSLayoutConstraint, _UICollectionViewListCellVisualProvider;
@protocol UITableConstants;

@interface UICollectionViewListCell : UICollectionViewCell <_UICollectionViewListCellReorderControlDelegate, UITableConstantsCellProviding> {
    struct { unsigned char style : 3; unsigned char isStyledAsHeader : 1; unsigned char forceHeaderStylingDueToSPIOutlineDisclosureAccessory : 1; unsigned char selectionStyle : 1; unsigned char expanded : 1; unsigned char needsUpdateAccessories : 1; unsigned char hasCustomIndentationLevel : 1; unsigned char hasCustomIndentationWidth : 1; unsigned char cellSelectionTogglesExpansionState : 1; unsigned char indentsAccessories : 1; unsigned char separatorLayoutGuideLeadingReferencesPrimaryText : 1; } _listCellFlags;
    _UICollectionViewListCellVisualProvider *_visualProvider;
    NSDictionary *_accessoriesByIdentifier;
    double _extraLeadingLayoutMarginForIndentation;
    NSArray *_contentViewConstraints;
    NSLayoutConstraint *_separatorLayoutGuideHeightConstraint;
    NSLayoutConstraint *_separatorLayoutGuideLeadingConstraint;
    NSLayoutConstraint *_separatorLayoutGuideTrailingConstraint;
    UILayoutGuide *_separatorLayoutGuide;
}

@property (copy, nonatomic) NSArray *leadingAccessoryConfigurations;
@property (copy, nonatomic) NSArray *trailingAccessoryConfigurations;
@property (copy, nonatomic) NSArray *leadingEditingAccessoryConfigurations;
@property (copy, nonatomic) NSArray *trailingEditingAccessoryConfigurations;
@property (readonly, nonatomic, getter=_owningViewForSeparatorLayoutGuide) UIView *owningViewForSeparatorLayoutGuide;
@property (readonly, nonatomic, getter=_constants) id<UITableConstants> constants;
@property (nonatomic, getter=_expanded, setter=_setExpanded:) BOOL _expanded;
@property (readonly, nonatomic, getter=_accessoryManager) UICellAccessoryManager *accessoryManager;
@property (nonatomic, getter=_defaultIndentationLevel, setter=_setDefaultIndentationLevel:) long long defaultIndentationLevel;
@property (retain, nonatomic, getter=_itemIdentifier, setter=_setItemIdentifier:) id itemIdentifier;
@property (copy, nonatomic) id /* block */ disclosureWasTappedHandler;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) double indentationWidth;
@property (nonatomic) BOOL indentsAccessories;
@property (copy, nonatomic) NSArray *accessories;
@property (readonly, nonatomic) UILayoutGuide *separatorLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=_minimumCellAccessoryMargin) double minimumCellAccessoryMargin;
@property (readonly, nonatomic, getter=_cellStyle) long long cellStyle;

+ (id)_createDefaultContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)_createVisualProviderForCell:(id)a0;

- (void)setEditing:(BOOL)a0;
- (void)_updateSystemTypeAccessoryView:(id)a0 withCellAccessory:(id)a1 orConfiguration:(id)a2 usingState:(id)a3;
- (void)safeAreaInsetsDidChange;
- (BOOL)canBeEdited;
- (void)_applyCellAccessoriesToNormalConfiguration:(id)a0 editingConfiguration:(id)a1;
- (id)_createSystemTypeAccessoryViewWithCellAccessory:(id)a0 orConfiguration:(id)a1;
- (long long)_tableStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_adjustedRawLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 withLeadingLayoutMarginAdjustment:(double)a1;
- (id)_cellAccessoryForConfiguration:(id)a0 isLeadingEdge:(BOOL)a1 usingState:(id)a2;
- (void).cxx_destruct;
- (void)_updateCurrentSystemTypeAccessoryViewsUsingState:(id)a0;
- (void)_updateSeparatorLayoutGuideForSectionSeparatorInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)_removesHighlightedAndSelectedStatesForBackground;
- (BOOL)_shouldIncreaseCellLeadingLayoutMarginForIndentation;
- (long long)selectionStyle;
- (id)_cellAccessoriesForConfigurations:(id)a0 isLeadingEdge:(BOOL)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionSeparatorInsetsFromLayoutAttributes:(id)a0;
- (id)_preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)prepareForReuse;
- (void)_reorderControlDidEndReordering:(id)a0 cancelled:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (void)_updateCellSelectionTogglesExpansionState;
- (id)configurationState;
- (void)_updateAccessoryLayoutMetrics;
- (void)_layoutAccessoriesAndContentView;
- (void)_setContentView:(id)a0 addToHierarchy:(BOOL)a1;
- (void)_updateContentViewConstraintsIfNeeded;
- (void)_constantsDidChange;
- (void)_updateLeadingLayoutMarginForIndentation;
- (void)_updateAccessoriesIfNeeded;
- (void)_updateSeparatorLayoutGuideHeight;
- (void)_setNeedsUpdateAccessories;
- (long long)_styleFromLayoutAttributes:(id)a0;
- (void)_setLayoutAttributes:(id)a0;
- (long long)_defaultFocusStyle;
- (void)setSelectionStyle:(long long)a0;
- (void)layoutSubviews;
- (void)_updateDefaultIndentationWidth;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_separatorInsetsFromLayoutGuide;
- (BOOL)_isAccompaniedSidebar;
- (void)_resetRawLayoutMargins;
- (id)_internalAccessoriesForCellAccessories:(id)a0;
- (void)_deleteAccessoryTriggered;
- (void)_toggleExpansionState;
- (void)_updateConfigurationUsingState:(id)a0;
- (void)_setIndentationLevel:(long long)a0;
- (void)_setIndentationWidth:(double)a0;
- (BOOL)_contentViewShouldBeIndented;
- (double)_leadingIndentation;
- (BOOL)_cellSelectionTogglesExpansionState;
- (BOOL)_reorderControlShouldBeginReordering:(id)a0;
- (void)_reorderControlDidBeginReordering:(id)a0;
- (void)_reorderControl:(id)a0 didUpdateWithOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)_editingControlTintColorForStyle:(long long)a0;
- (void)_createAccessoryManager;
- (id)defaultContentConfiguration;
- (id)_defaultBackgroundConfiguration;
- (id)_defaultBackgroundView;
- (id)_defaultSelectedBackgroundView;
- (BOOL)_isFocusableWhenStyledAsHeader;
- (BOOL)_canFocusProgrammatically;
- (void)_configureFocusedFloatingContentView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_hasCustomSelectionAction;
- (BOOL)_performCustomSelectionAction;
- (id)_viewForMultiSelectAccessory;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentViewInset;
- (void)_updateConstants;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setRawLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)encodeWithCoder:(id)a0;

@end
