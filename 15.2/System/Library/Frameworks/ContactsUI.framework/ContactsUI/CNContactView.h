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
+ (id)cellIdentifierForClass:(Class)a0;
+ (id)cellIdentifierForActions;
+ (id)cellIdentifierForSplitActions;
+ (id)cellIdentifierForDropdownMenuActions;
+ (id)cellIdentifierForPropertyPlaceholder;
+ (id)cellIdentifierForFaceTimeGroup;
+ (id)cellIdentifierForLinkedCardsGroup;
+ (id)allCardProperties;
+ (id)cellIdentifierForLinkedCardsEditingGroup;
+ (id)cellIdentifierForLinkedCardsPlaceholderGroup;
+ (id)cellIdentifierForContactContainerEditingGroup;
+ (id)cellIdentifierForProperty:(id)a0;
+ (id)cellIdentifierForEditingProperty:(id)a0;
+ (Class)classForCellIdentifier:(id)a0;
+ (id)namePropertiesForContact:(id)a0;
+ (id)requiredNameProperties;
+ (id)defaultCardProperties;
+ (id)optionalCardProperties;
+ (id)allImageProperties;
+ (BOOL)isMultiValueProperty:(id)a0;
+ (BOOL)isFixedValueProperty:(id)a0;

- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)updateFontSizes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1 contact:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contact:(id)a1;
- (void)_cnui_applyContactStyle;
- (void)updateTableViewMetrics;
- (void)updateFontColors;
- (void)registerContactCellClass:(Class)a0;
- (void)setAttributesFromContactView:(id)a0 runningInContactsAppOniPad:(BOOL)a1;
- (void)setNeedsUpdateVisibleCells;
- (void)updateVisibleCellsIfNeeded;
- (void)applyCellAppearance:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)tintColorDidChange;
- (void)setEditing:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;

@end
