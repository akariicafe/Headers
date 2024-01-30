@class UITableViewController, NSString, UIActivityIndicatorView, MPWeakTimer, UILabel, UIBarButtonItem;
@protocol MCDNowPlayingContentManagerProtocol;

@interface MCDNowPlayingViewController : CPUINowPlayingViewController <MCDNowPlayingContentManagerDelegate>

@property (retain, nonatomic) UIBarButtonItem *backButton;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIBarButtonItem *activityIndicatorBarButtonItem;
@property (nonatomic) BOOL trackBuffering;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) MPWeakTimer *activityTimer;
@property (retain, nonatomic) UILabel *rightTitleLabel;
@property (retain, nonatomic) UIBarButtonItem *rightTitleLabelBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *playbackQueueBarButtonItem;
@property (nonatomic) BOOL handledWillAppear;
@property (nonatomic) BOOL shouldShowPlaybackQueue;
@property (nonatomic) BOOL showNavigationBar;
@property (retain, nonatomic) UITableViewController *playbackQueueViewController;
@property (retain, nonatomic) id<MCDNowPlayingContentManagerProtocol> contentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setRightTitle:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)_updateBackButton;
- (void)_adjustRightTitleLabelToFit;
- (void)upNextButtonTapped:(id)a0;
- (id)initWithPlayableBundleID:(id)a0 appName:(id)a1;
- (id)initWithBundleID:(id)a0 appName:(id)a1;
- (void)_setupActivityTimer;
- (void)contentManager:(id)a0 shouldShowPlaybackQueue:(BOOL)a1;
- (void)_handleWillAppear;
- (void)_popViewControllerAnimated;
- (void)_invalidateActivityTimer;
- (void)contentManagerReloadData:(id)a0;
- (void)contentManager:(id)a0 presentViewController:(id)a1;
- (void)contentManager:(id)a0 bufferingItem:(BOOL)a1;
- (void)contentManagerInitiatedPlaybackFromPlaybackQueue:(id)a0;
- (void)contentManager:(id)a0 displayItemIndex:(long long)a1 totalItemCount:(long long)a2;
- (void)contentManagerCompletedAllPlayback:(id)a0;
- (void)contentManager:(id)a0 sectionName:(id)a1;

@end
