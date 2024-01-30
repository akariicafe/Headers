@class NSString, OFUICircularPagingView;

@interface OFUICircularPagingViewController : OFUIViewController <OFUICircularPagingViewDelegate>

@property (retain, nonatomic) OFUICircularPagingView *circularPagingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)circularPagingViewClass;

- (void)willMoveToParentViewController:(id)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didReceiveMemoryWarning;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)circularPagingViewDidMoveBackward:(id)a0;
- (void)circularPagingViewDidMoveForward:(id)a0;

@end
