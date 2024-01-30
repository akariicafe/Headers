@class OFUIPagingView, NSString;

@interface OFUIPagingViewController : OFUIViewController <OFUIPagingViewDelegate>

@property (retain, nonatomic) OFUIPagingView *pagingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)pagingViewClass;

- (void)willMoveToParentViewController:(id)a0;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)viewWillUnload;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (long long)numberOfPagesInPagingView:(id)a0;
- (id)viewForPageInPagingView:(id)a0 atIndex:(long long)a1;

@end
