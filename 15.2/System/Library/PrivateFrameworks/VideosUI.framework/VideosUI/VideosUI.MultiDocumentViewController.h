@interface VideosUI.MultiDocumentViewController : VideosUI.DocumentViewController <VUIDeeplinkURLHandlingInterceptor> {
    void /* unknown type, empty encoding */ parentDocumentDataSource;
    void /* unknown type, empty encoding */ parentTitleContextDataKey;
    void /* unknown type, empty encoding */ segmentTitlesContextDataKey;
    void /* unknown type, empty encoding */ placeholderInteractor;
    void /* unknown type, empty encoding */ placeholderDocument;
    void /* unknown type, empty encoding */ segmentTitles;
    void /* unknown type, empty encoding */ parentTitle;
    void /* unknown type, empty encoding */ documentInteractors;
    void /* unknown type, empty encoding */ interactorObservers;
    void /* unknown type, empty encoding */ selectedDocumentIndex;
    void /* unknown type, empty encoding */ templateViewControllers;
    void /* unknown type, empty encoding */ $__lazy_storage_$_spinnerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pinningHeaderView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_statusBarView;
    void /* unknown type, empty encoding */ allowsDocumentSelection;
}

- (void)deeplinkURLWasHandled:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewSafeAreaInsetsDidChange;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewWillDisappear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;

@end
