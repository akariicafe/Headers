@class UILabel;

@interface WGWidgetListEditViewTableHeaderView : UITableViewHeaderFooterView {
    UILabel *_headlineLabel;
    UILabel *_explanationLabel;
}

@property (readonly, nonatomic) double contentMinY;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_explanationLabelFrameForBoundsWidth:(double)a0 withHeadlineLabelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_headlineLabelFrameForBoundsWidth:(double)a0;
- (id)initWithReuseIdentifier:(id)a0 forTodayView:(BOOL)a1;

@end
