@interface NewsFeed.DebugFormatMainViewController : UISplitViewController <UISplitViewControllerDelegate> {
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ reloadState;
    void /* unknown type, empty encoding */ inventoryViewController;
    void /* unknown type, empty encoding */ inventoryContainerController;
    void /* unknown type, empty encoding */ editorViewController;
    void /* unknown type, empty encoding */ editorContainerController;
    void /* unknown type, empty encoding */ layoutViewController;
    void /* unknown type, empty encoding */ metricViewController;
    void /* unknown type, empty encoding */ bindingViewController;
    void /* unknown type, empty encoding */ assetViewController;
    void /* unknown type, empty encoding */ compilerViewController;
    void /* unknown type, empty encoding */ testViewController;
    void /* unknown type, empty encoding */ containerSegmentedViewController;
    void /* unknown type, empty encoding */ logViewController;
    void /* unknown type, empty encoding */ consoleViewController;
    void /* unknown type, empty encoding */ formatManager;
    void /* unknown type, empty encoding */ packages;
}

- (id)primaryViewControllerForCollapsingSplitViewController:(id)a0;
- (id)primaryViewControllerForExpandingSplitViewController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;

@end
