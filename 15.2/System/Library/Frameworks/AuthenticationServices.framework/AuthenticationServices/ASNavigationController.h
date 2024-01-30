@class UIVisualEffectView;

@interface ASNavigationController : UINavigationController {
    UIVisualEffectView *_backdropView;
    long long _currentStyle;
}

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
