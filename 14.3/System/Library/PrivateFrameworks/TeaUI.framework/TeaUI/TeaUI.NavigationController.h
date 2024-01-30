@interface TeaUI.NavigationController : TUNavigationController <TSSearchResultsPanable> {
    void /* unknown type, empty encoding */ styler;
}

@property (nonatomic) BOOL hidesBottomBarWhenPushed;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) long long preferredTrailingStatusBarStyle;
@property (nonatomic, readonly) BOOL isSearchResultsPane;

- (void).cxx_destruct;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithCoder:(id)a0;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithRootViewController:(id)a0;
- (id)initWithRootViewController:(id)a0 navigationBarClass:(Class)a1;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;

@end
