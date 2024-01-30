@class _PKAccountDebugViewController, PKAccountViewInterfaceConfiguration;

@interface PKAccountDebugViewController : UIViewController {
    _PKAccountDebugViewController *_viewController;
    PKAccountViewInterfaceConfiguration *_config;
}

- (id)initWithConfiguration:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)_handleShareButton:(id)a0;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;

@end
