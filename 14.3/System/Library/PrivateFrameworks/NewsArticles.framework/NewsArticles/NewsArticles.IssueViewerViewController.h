@class UIViewController;

@interface NewsArticles.IssueViewerViewController : UIViewController <NAANFHostable> {
    void /* unknown type, empty encoding */ contentViewControllerFactory;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ sceneStateManager;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ navigationItemStyle;
    void /* unknown type, empty encoding */ contentViewController;
    void /* unknown type, empty encoding */ afterLoad;
}

@property (nonatomic, readonly) unsigned long long viewingLocation;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
