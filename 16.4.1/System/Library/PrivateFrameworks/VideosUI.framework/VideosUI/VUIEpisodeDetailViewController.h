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

- (void)dismissPopover;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)_configureNavigationBar;
- (id)initWithMediaItem:(id)a0;
- (void)didTapPlay;
- (void)dismissTapped:(id)a0;
- (void)reportMetricsPageEvent;

@end
