@class NSArray;

@interface NewsUI2.MagazineFeedPaywallViewController : UIViewController <TUPluggable, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ blueprintLayoutOptionsProvider;
    void /* unknown type, empty encoding */ paywallLayoutAttributesFactory;
    void /* unknown type, empty encoding */ paywallRenderer;
    void /* unknown type, empty encoding */ paywallView;
    void /* unknown type, empty encoding */ purchasingSpinnerViewControllerFactory;
    void /* unknown type, empty encoding */ $__lazy_storage_$_spinnerViewController;
    void /* unknown type, empty encoding */ purchasePresenter;
    void /* unknown type, empty encoding */ lastRenderedVerticalContentOffset;
    void /* unknown type, empty encoding */ imageResults;
    void /* unknown type, empty encoding */ badgeImageResults;
    void /* unknown type, empty encoding */ videoFilePath;
}

@property (nonatomic, readonly) long long pluginItemCount;
@property (nonatomic, readonly) long long pluginVisibleItemCount;
@property (nonatomic, readonly) NSArray *pluginItemIdentifiers;
@property (nonatomic) void /* unknown type, empty encoding */ isBeingUsedAsPlugin;
@property (nonatomic, weak) void /* unknown type, empty encoding */ pluggableDelegate;

- (void)scrollViewDidScroll:(id)a0;
- (void)initializeWithCompletion:(id /* block */)a0;
- (void)relayoutWithCompletion:(id /* block */)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
