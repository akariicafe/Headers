@class ExtensionListViewController, PBFGalleryViewController, PBFClientTesterViewController, UIViewController, UISegmentedControl, PBFConfigViewController, UINavigationBar;

@interface PBFExtensionTestingViewController : UIViewController {
    UINavigationBar *_barView;
    UISegmentedControl *_variantSelector;
    ExtensionListViewController *_renderingController;
    ExtensionListViewController *_editingController;
    PBFGalleryViewController *_galleryController;
    PBFConfigViewController *_configController;
    PBFClientTesterViewController *_clientTesterController;
    UIViewController *_presentedViewController;
}

- (void)viewDidLoad;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)_variantSelectorValueChanged:(id)a0;
- (void)presentPage:(id)a0;

@end
