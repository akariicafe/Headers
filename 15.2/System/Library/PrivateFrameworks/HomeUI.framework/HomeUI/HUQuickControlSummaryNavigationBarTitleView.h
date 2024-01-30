@class NSArray, HUQuickControlSummaryView;

@interface HUQuickControlSummaryNavigationBarTitleView : _UINavigationBarTitleView

@property (retain, nonatomic) HUQuickControlSummaryView *summaryView;
@property (retain, nonatomic) NSArray *contentConstraints;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)transitionCompleted:(long long)a0 willBeDisplayed:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateConstraints;

@end
