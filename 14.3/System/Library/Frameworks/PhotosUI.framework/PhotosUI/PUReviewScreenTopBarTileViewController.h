@class NSString, PUReviewScreenBarsModel, PUReviewScreenTopBar, PUBrowsingViewModel;

@interface PUReviewScreenTopBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver>

@property (retain, nonatomic, setter=_setTopBar:) PUReviewScreenTopBar *_topBar;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUReviewScreenBarsModel *barsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateControls;
- (void)_updateBarLayout;
- (void)_updateVisibilityAnimated:(BOOL)a0;
- (void)_handleDoneButtonTapped:(id)a0;
- (void)_handleRetakeButtonTapped:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)loadView;
- (void)becomeReusable;

@end
