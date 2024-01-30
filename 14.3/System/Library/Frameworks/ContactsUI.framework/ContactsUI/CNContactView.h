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

+ (id)allImageProperties;
+ (id)cellIdentifierForClass:(Class)a0;
+ (id)cellIdentifierForActions;
+ (id)cellIdentifierForSplitActions;
+ (id)cellIdentifierForPropertyPlaceholder;
+ (id)cellIdentifierForFaceTimeGroup;
+ (id)cellIdentifierForLinkedCardsGroup;
+ (id)allCardProperties;
+ (id)cellIdentifierForLinkedCardsEditingGroup;
+ (id)cellIdentifierForEditingProperty:(id)a0;
+ (id)cellIdentifierForLinkedCardsPlaceholderGroup;
+ (id)cellIdentifierForProperty:(id)a0;
+ (Class)classForCellIdentifier:(id)a0;
+ (id)namePropertiesForContact:(id)a0;
+ (id)requiredNameProperties;
+ (id)defaultCardProperties;
+ (id)optionalCardProperties;
+ (BOOL)isMultiValueProperty:(id)a0;
+ (BOOL)isFixedValueProperty:(id)a0;
+ (id)nameProperties;

- (void)layoutMarginsDidChange;
- (void)setEditing:(BOOL)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1 contact:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contact:(id)a1;
- (void)_cnui_applyContactStyle;
- (void)updateTableViewMetrics;
- (void)registerContactCellClass:(Class)a0;
- (void)setNeedsUpdateVisibleCells;
- (void)setAttributesFromContactView:(id)a0 runningInContactsAppOniPad:(BOOL)a1;
- (void)updateFontColors;
- (void)updateVisibleCellsIfNeeded;
- (void)applyCellAppearance:(id)a0;
- (void)updateFontSizes;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;

@end
