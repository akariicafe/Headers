@class NSString, OFUICircularPagingView;

@interface OFUICircularPagingViewController : OFUIViewController <OFUICircularPagingViewDelegate>

@property (retain, nonatomic) OFUICircularPagingView *circularPagingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)circularPagingViewClass;

- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)commonInit;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidUnload;
- (id)init;
- (void)viewWillUnload;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)circularPagingViewDidMoveForward:(id)a0;
- (void)circularPagingViewDidMoveBackward:(id)a0;

@end
