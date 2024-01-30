@interface _UISearchControllerATVSearchBarAnimator : _UISearchControllerAnimator

@property (nonatomic) BOOL shouldLayoutTabBar;

- (id)init;
- (void)animateTransition:(id)a0;
- (void)didRelayoutSearchBarForController:(id)a0;
- (void)didFocusSearchBarForController:(id)a0;
- (void)didUnfocusSearchBarForController:(id)a0;
- (void)willFocusOffscreenViewForController:(id)a0 withHeading:(unsigned long long)a1;
- (void)updateViewsWithSearchController:(id)a0 reloadInputViewController:(BOOL)a1;
- (void)_updateLayoutForGridKeyboard:(id)a0 animated:(BOOL)a1;
- (void)updateViewsWithSearchController:(id)a0;

@end
