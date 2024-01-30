@class NSString, UIViewController, SiriUIContentPlatterViewController;

@interface SiriUINavigationContentViewController : UIViewController <SiriUIContentPlatterViewControllerContaining>

@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic, getter=isContentLayoutEnabled) BOOL contentLayoutEnabled;
@property (readonly, nonatomic) SiriUIContentPlatterViewController *contentPlatterViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)title;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (id)_navigationContentView;
- (BOOL)hasContentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)contentViewDidUpdateSize;

@end
