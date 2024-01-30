@class UIColor, UIVisualEffect;

@interface UICollectionViewTableLayoutAttributes : UICollectionViewLayoutAttributes <UICollectionViewTableSectionHeaderFooterAttributes, UICollectionViewTableAllRowAttributes>

@property (nonatomic) BOOL preferredAttributesCached;
@property (nonatomic) BOOL isHeader;
@property (nonatomic) double maxTitleWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL floating;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } separatorInset;
@property (nonatomic) BOOL separatorInsetIsRelativeToCellEdges;
@property (copy, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIVisualEffect *separatorEffect;
@property (nonatomic) int sectionLocation;
@property (nonatomic) BOOL layoutMarginsFollowReadableWidth;
@property (nonatomic) BOOL insetsContentViewsToSafeArea;
@property (nonatomic) double defaultLeadingCellMarginWidth;
@property (nonatomic) double defaultTrailingCellMarginWidth;
@property (nonatomic) double indexBarExtentFromEdge;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } backgroundInset;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) BOOL drawsSeparatorAtTopOfSection;
@property (nonatomic) BOOL drawsSeparatorAtBottomOfSection;
@property (nonatomic) long long accessoryType;
@property (nonatomic) long long editingStyle;
@property (nonatomic) BOOL shouldIndentWhileEditing;
@property (nonatomic) BOOL showsReorderControl;

+ (long long)automaticValueOptionsForRepresentedElementCategory:(unsigned long long)a0;
+ (void)applyValuesFromAttributes:(id)a0 toAttributes:(id)a1 valueOptions:(long long)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
