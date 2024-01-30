@class _UIBackdropView;

@interface AKAuthorizationNavigationController : UINavigationController {
    _UIBackdropView *_backdropView;
    long long _currentStyle;
}

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateStyleIfNeeded;

@end
