@class UINavigationItem, UIViewController, TKKeyPathObserver;

@interface TKContainerViewController : UIViewController {
    TKKeyPathObserver *_observer;
    UINavigationItem *_childNavigationItem;
    BOOL _appearing;
}

@property (retain, nonatomic) UIViewController *childViewController;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)edgesForExtendedLayout;
- (void)observeChild;
- (void)updateInternals:(id)a0;

@end
