@class PUBrowsingViewModel, NSString, PUReviewScreenBarsModel, PUReviewScreenControlBar;

@interface PUReviewScreenControlBarTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver>

@property (retain, nonatomic, setter=_setControlBar:) PUReviewScreenControlBar *_controlBar;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUReviewScreenBarsModel *barsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_handleEditButtonTapped:(id)a0;
- (void)_handleMarkupButtonTapped:(id)a0;
- (void)_handleFunEffectsButtonTapped:(id)a0;
- (void)_handleSendButtonTapped:(id)a0;
- (void)_updateControls;
- (void)_updateBarLayout;
- (void)_updateVisibilityAnimated:(BOOL)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)loadView;
- (id)_barControlsForModelControls:(id)a0 transitioning:(BOOL)a1;
- (void)becomeReusable;

@end
