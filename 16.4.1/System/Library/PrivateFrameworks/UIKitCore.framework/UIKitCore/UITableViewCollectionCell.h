@class UIColor, UIVisualEffect;

@interface UITableViewCollectionCell : UITableViewCell <UICollectionViewTableAllRowAttributes>

@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } separatorInset;
@property (nonatomic) BOOL separatorInsetIsRelativeToCellEdges;
@property (copy, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIVisualEffect *separatorEffect;
@property (nonatomic) int sectionLocation;
@property (nonatomic) BOOL layoutMarginsFollowReadableWidth;
@property (nonatomic) BOOL insetsContentViewsToSafeArea;
@property (nonatomic) double defaultLeadingCellMarginWidth;
@property (nonatomic) double defaultTrailingCellMarginWidth;
@property (nonatomic) double indexBarExtentFromEdge;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } backgroundInset;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) BOOL drawsSeparatorAtTopOfSection;
@property (nonatomic) BOOL drawsSeparatorAtBottomOfSection;
@property (nonatomic) long long accessoryType;
@property (nonatomic) long long editingStyle;
@property (nonatomic) BOOL shouldIndentWhileEditing;
@property (nonatomic) BOOL showsReorderControl;

- (BOOL)canBecomeFocused;

@end
