@class UIInputSwitcherSegmentControl;

@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell

@property (readonly, nonatomic) UIInputSwitcherSegmentControl *segmentControl;

+ (struct CGSize { double x0; double x1; })preferredSizeWithSegmentCount:(unsigned long long)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setUsesDarkTheme:(BOOL)a0;

@end
