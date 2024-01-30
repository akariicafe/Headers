@class _UIBackdropView;

@interface AKAuthorizationNavigationController : UINavigationController {
    _UIBackdropView *_backdropView;
    long long _currentStyle;
}

- (void).cxx_destruct;
- (void)_updateStyleIfNeeded;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
