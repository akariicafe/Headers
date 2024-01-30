@class HUNavigationBarLayoutOptions, NSArray, NSString, HUDashboardNavigationTitleView;

@interface HUDashboardNavigationBar : UINavigationBar <HUDashboardNavigationTitleViewDelegate, HUDashboardNavigationHost>

@property (retain, nonatomic) HUDashboardNavigationTitleView *titleView;
@property (nonatomic) BOOL isBackgroundVisible;
@property (retain, nonatomic) NSArray *leftDashboardNavigationButtons;
@property (retain, nonatomic) NSArray *rightDashboardNavigationButtons;
@property (copy, nonatomic) HUNavigationBarLayoutOptions *layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setItems:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateLayoutMargins;
- (id)popNavigationItemAnimated:(BOOL)a0;
- (void)pushNavigationItem:(id)a0 animated:(BOOL)a1;
- (void)largeTitleHeightDidChange:(double)a0;
- (void)_updateAllBarButtonItemsForTopItem;
- (void)_updateLeftBarButtonItemsForTopItem;
- (void)_updateRightBarButtonItemsForTopItem;
- (void)_updateTintColorForBarButtons:(id)a0;

@end
