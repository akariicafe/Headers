@class NSString, UIVisualEffectView, UIViewController;

@interface HUPocketedContainerViewController : UIViewController <HUPreloadableViewController>

@property (retain, nonatomic) UIVisualEffectView *pocketBackgroundView;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) UIViewController *pocketViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithContentViewController:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)hu_preloadContent;
- (id)initWithContentViewController:(id)a0 pocketViewController:(id)a1;
- (void)_installContentViewController;
- (id)_installPocket;
- (id)_tearDownPocket;

@end
