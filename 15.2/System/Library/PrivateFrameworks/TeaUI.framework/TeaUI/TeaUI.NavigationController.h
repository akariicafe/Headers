@interface TeaUI.NavigationController : TUNavigationController <TSSearchResultsPanable> {
    void /* unknown type, empty encoding */ styler;
}

@property (nonatomic) BOOL hidesBottomBarWhenPushed;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) long long ts_preferredLeadingStatusBarStyle;
@property (nonatomic, readonly) long long ts_preferredCenterStatusBarStyle;
@property (nonatomic, readonly) long long ts_preferredTrailingStatusBarStyle;
@property (nonatomic, readonly) BOOL isSearchResultsPane;

- (id)popViewControllerAnimated:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (BOOL)accessibilityPerformEscape;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithRootViewController:(id)a0 navigationBarClass:(Class)a1;

@end
