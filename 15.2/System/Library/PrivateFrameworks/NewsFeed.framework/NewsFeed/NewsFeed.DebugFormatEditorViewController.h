@interface NewsFeed.DebugFormatEditorViewController : UIViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ packages;
    void /* unknown type, empty encoding */ errorViewController;
    void /* unknown type, empty encoding */ canvasViewController;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ rulerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_overlayView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ statusView;
    void /* unknown type, empty encoding */ zoomLabel;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ lastLayoutBounds;
}

- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)doReload;
- (void)doDismiss;
- (void)doToggleSidebar;
- (void)doLightDarkModeWithSender:(id)a0;
- (void)doDevicesWithSender:(id)a0;
- (void)doOptionsWithSender:(id)a0;
- (void)resetZoom;
- (void)viewLayoutMarginsDidChange;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)overrideTraitCollectionForChildViewController:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
