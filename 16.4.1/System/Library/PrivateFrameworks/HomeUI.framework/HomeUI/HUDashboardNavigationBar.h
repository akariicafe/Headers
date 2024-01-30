@class HUDashboardNavigationTitleView;

@interface HUDashboardNavigationBar : UINavigationBar <HUDashboardNavigationTitleViewDelegate>

@property (retain, nonatomic) HUDashboardNavigationTitleView *titleView;
@property (nonatomic) BOOL isBackgroundVisible;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (long long)_sceneDraggingBehaviorOnPan;
- (void)largeTitleHeightDidChange:(double)a0;

@end
