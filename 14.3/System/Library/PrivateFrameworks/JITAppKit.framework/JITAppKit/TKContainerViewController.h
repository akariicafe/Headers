@class UINavigationItem, UIViewController, TKKeyPathObserver;

@interface TKContainerViewController : UIViewController {
    TKKeyPathObserver *_observer;
    UINavigationItem *_childNavigationItem;
    BOOL _appearing;
}

@property (retain, nonatomic) UIViewController *childViewController;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)edgesForExtendedLayout;
- (void)viewDidLoad;
- (void)observeChild;
- (void)updateInternals:(id)a0;

@end
