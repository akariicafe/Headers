@class UIVisualEffectView;

@interface ASNavigationController : UINavigationController {
    UIVisualEffectView *_backdropView;
}

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_adjustedContentSizeForPopover:(struct CGSize { double x0; double x1; })a0;

@end
