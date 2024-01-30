@class UIInputSwitcherTableCellBackgroundView;

@interface UIInputSwitcherTableCell : UITableViewCell

@property (retain, nonatomic) UIInputSwitcherTableCellBackgroundView *backgroundView;
@property (nonatomic) BOOL usesDarkTheme;
@property (nonatomic) BOOL usesStraightLeftEdge;
@property (nonatomic, getter=isFirst) BOOL first;
@property (nonatomic, getter=isLast) BOOL last;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactiveInsets;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)_updateRoundedCorners;

@end
