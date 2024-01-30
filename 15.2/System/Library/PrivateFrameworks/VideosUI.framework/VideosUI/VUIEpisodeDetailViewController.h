@class VUIEpisodeDetailView, NSString, VUIViewControllerContentPresenter, VUIMediaItem, UITapGestureRecognizer;
@protocol VUIEpisodeDetailViewControllerDelegate;

@interface VUIEpisodeDetailViewController : UIViewController <UIGestureRecognizerDelegate, VUIEpisodeDetailViewDelegate>

@property (retain, nonatomic) VUIMediaItem *mediaItem;
@property (retain, nonatomic) VUIEpisodeDetailView *detailView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (weak, nonatomic) id<VUIEpisodeDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)loadView;
- (id)initWithMediaItem:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dismissPopover;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_configureNavigationBar;
- (void)dismissTapped:(id)a0;
- (void)reportMetricsPageEvent;
- (void)didTapPlay;

@end
