@interface VideosUI.EpicInlineViewController : VUIBaseViewController {
    void /* unknown type, empty encoding */ collectionImpressioner;
    void /* unknown type, empty encoding */ shelfViewModel;
    void /* unknown type, empty encoding */ horizontalCollectionViewModel;
    void /* unknown type, empty encoding */ lastViewWidth;
    void /* unknown type, empty encoding */ horizontalStackViewController;
    void /* unknown type, empty encoding */ scrollViewMonitor;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)vui_loadView;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewWillLayoutSubviews;

@end
