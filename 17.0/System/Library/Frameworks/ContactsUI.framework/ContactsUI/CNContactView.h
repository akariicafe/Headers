@class UIColor, CNContact, NSDictionary, UIView, CNContactHeaderView;

@interface CNContactView : CNMaskingTableView

@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) struct CGSize { double width; double height; } oldSize;
@property (nonatomic) BOOL needsUpdateVisibleCells;
@property (retain, nonatomic) UIView *customHeaderView;
@property (readonly, nonatomic) CNContactHeaderView *defaultHeaderView;
@property (nonatomic, getter=isCellsLayoutCachingEnabled) BOOL cellsLayoutCachingEnabled;
@property (nonatomic) BOOL shouldUseMapTiles;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIColor *sectionBackgroundColor;
@property (retain, nonatomic) UIColor *selectedCellBackgroundColor;
@property (copy, nonatomic) NSDictionary *labelTextAttributes;
@property (copy, nonatomic) NSDictionary *valueTextAttributes;
@property (copy, nonatomic) NSDictionary *actionTextAttributes;

+ (id)nameProperties;
+ (id)addFieldCardProperties;
+ (id)allCardProperties;
+ (id)allImageProperties;
+ (id)cellIdentifierForActions;
+ (id)cellIdentifierForCardNamePickingGroup;
+ (id)cellIdentifierForClass:(Class)a0;
+ (id)cellIdentifierForContactContainerEditingGroup;
+ (id)cellIdentifierForDropdownMenuActions;
+ (id)cellIdentifierForEditingProperty:(id)a0;
+ (id)cellIdentifierForEditingPropertyItem:(id)a0;
+ (id)cellIdentifierForFaceTimeGroup;
+ (id)cellIdentifierForGameCenterGroup;
+ (id)cellIdentifierForGroupMembershipEditingGroup;
+ (id)cellIdentifierForGroupMembershipGroup;
+ (id)cellIdentifierForGroupMembershipPlaceholderGroup;
+ (id)cellIdentifierForLinkedCardsEditingGroup;
+ (id)cellIdentifierForLinkedCardsGroup;
+ (id)cellIdentifierForLinkedCardsPlaceholderGroup;
+ (id)cellIdentifierForMeCardSharedProfileGroup;
+ (id)cellIdentifierForProperty:(id)a0;
+ (id)cellIdentifierForPropertyPlaceholder;
+ (id)cellIdentifierForSNaPGroup;
+ (id)cellIdentifierForSharedProfileBanner;
+ (id)cellIdentifierForSplitActions;
+ (Class)classForCellIdentifier:(id)a0;
+ (id)defaultCardProperties;
+ (BOOL)isFixedValueProperty:(id)a0;
+ (BOOL)isMultiValueProperty:(id)a0;
+ (id)namePropertiesForContact:(id)a0;
+ (id)optionalCardProperties;
+ (id)requiredNameProperties;

- (void)layoutMarginsDidChange;
- (void)setBackgroundColor:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0;
- (void)layoutSubviews;
- (void)updateFontSizes;
- (void)_cnui_applyContactStyle;
- (void)applyCellAppearance:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contact:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1 contact:(id)a2;
- (void)registerContactCellClass:(Class)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInsetForCell:(id)a0;
- (void)setAttributesFromContactView:(id)a0 runningInContactsAppOniPad:(BOOL)a1;
- (void)setNeedsUpdateVisibleCells;
- (void)updateFontColors;
- (void)updateTableViewMetrics;
- (void)updateVisibleCellsIfNeeded;

@end
