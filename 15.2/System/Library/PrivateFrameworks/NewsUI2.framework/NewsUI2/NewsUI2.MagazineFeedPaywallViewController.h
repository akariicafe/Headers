@interface NewsUI2.MagazineFeedPaywallViewController : UIViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ blueprintLayoutOptionsProvider;
    void /* unknown type, empty encoding */ paywallLayoutAttributesFactory;
    void /* unknown type, empty encoding */ paywallRenderer;
    void /* unknown type, empty encoding */ paywallView;
    void /* unknown type, empty encoding */ isBeingUsedAsPlugin;
    void /* unknown type, empty encoding */ pluggableDelegate;
    void /* unknown type, empty encoding */ purchasingSpinnerViewControllerFactory;
    void /* unknown type, empty encoding */ $__lazy_storage_$_spinnerViewController;
    void /* unknown type, empty encoding */ purchasePresenter;
    void /* unknown type, empty encoding */ lastRenderedVerticalContentOffset;
    void /* unknown type, empty encoding */ imageResults;
    void /* unknown type, empty encoding */ badgeImageResults;
    void /* unknown type, empty encoding */ videoFilePath;
}

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
