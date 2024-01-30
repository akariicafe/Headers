@class NSString, PXFeedBasedMemoriesDataSourceManager;
@protocol PXForYouMemoriesViewControllerDelegate;

@interface PXForYouMemoriesViewController : PXMemoriesUIViewController <PXUserInterfaceFeatureViewController, PXScrollViewControllerObserver, PXUIViewControllerZoomTransitionEndPoint>

@property (readonly, nonatomic) BOOL shouldHandleEntireDataSource;
@property (readonly, nonatomic) PXFeedBasedMemoriesDataSourceManager *dataSourceManager;
@property (weak, nonatomic) id<PXForYouMemoriesViewControllerDelegate> delegate;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } dataSourceRange;
@property (nonatomic) unsigned long long rowType;
@property (readonly, nonatomic) long long userInterfaceFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithDataSourceManager:(id)a0;
- (void)scrollViewControllerWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)_alignToNearestGadget;
- (id)createNewLayoutGenerator;
- (BOOL)tryToNavigateToDetailsOfMemoryWithUUID:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_scrollMemoryReferenceToVisible:(id)a0 animated:(BOOL)a1;

@end
