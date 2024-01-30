@class UINavigationItem, UIViewController, TKKeyPathObserver;

@interface TKContainerViewController : UIViewController {
    TKKeyPathObserver *_observer;
    UINavigationItem *_childNavigationItem;
    BOOL _appearing;
}

@property (retain, nonatomic) UIViewController *childViewController;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (unsigned long long)edgesForExtendedLayout;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)observeChild;
- (void)updateInternals:(id)a0;

@end
