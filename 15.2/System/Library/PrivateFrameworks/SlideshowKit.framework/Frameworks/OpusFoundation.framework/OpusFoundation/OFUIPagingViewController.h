@class OFUIPagingView, NSString;

@interface OFUIPagingViewController : OFUIViewController <OFUIPagingViewDelegate>

@property (retain, nonatomic) OFUIPagingView *pagingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)pagingViewClass;

- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (long long)numberOfPagesInPagingView:(id)a0;
- (id)viewForPageInPagingView:(id)a0 atIndex:(long long)a1;

@end
