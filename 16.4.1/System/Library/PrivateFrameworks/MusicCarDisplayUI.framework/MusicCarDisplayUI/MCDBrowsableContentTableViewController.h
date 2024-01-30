@class UIView, NSString, CPUINowPlayingButton, MCDPCContainer, MPWeakTimer, CARSessionStatus, UITableView, NSObject, UIAlertController, _UIFilteredDataSource, NSIndexPath;
@protocol OS_dispatch_queue;

@interface MCDBrowsableContentTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, MCDPCContainerDelegate, MCDErrorViewDelegate, CARSessionObserving> {
    UITableView *_tableView;
    CPUINowPlayingButton *_nowPlayingButton;
    long long _count;
    NSIndexPath *_selectedNextIndexPath;
    _UIFilteredDataSource *_dataSource;
    NSIndexPath *_reselectIndexPath;
    MPWeakTimer *_delayTimer;
    UIView *_MCD_tableView;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CARSessionStatus *_carSessionStatus;
    BOOL _limited;
    BOOL _hasCarScreen;
    BOOL _hasNoBrowsableContent;
    BOOL _didPushToNowPlayingAtLaunch;
    BOOL _isRootTableViewController;
    BOOL _hasTabbedBrowsing;
}

@property (nonatomic, getter=isVisible) BOOL visible;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) UIView *placeholderView;
@property (nonatomic) BOOL currentlyPlayingApp;
@property (retain, nonatomic) MPWeakTimer *loadingTimer;
@property (retain, nonatomic) UIAlertController *alertController;
@property (nonatomic) BOOL pushToNowPlaying;
@property (retain, nonatomic) MCDPCContainer *container;
@property (nonatomic) BOOL didFinishInitialLoad;
@property (nonatomic) BOOL didFinishInitialViewAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainer:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)preferredFocusEnvironments;
- (id)contentScrollView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didFocusRowAtIndexPath:(id)a1;
- (void)_configureCell:(id)a0 forIndexPath:(id)a1;
- (void)_limitedUIChanged:(id)a0;
- (void)reloadTable;
- (void)_playbackStateChanged:(id)a0;
- (void)reloadWithCompletion:(id /* block */)a0;
- (void)_nowPlayingButtonTapped:(id)a0;
- (void)_appRegisteredForContent:(id)a0;
- (void)_clearLoadingActivity;
- (void)_clearTableViewSelectionAnimated:(BOOL)a0;
- (void)_displayErrorAlertController:(id)a0;
- (void)_displayLoadingActivity;
- (void)_nowPlayingDidChange:(id)a0;
- (void)_pushToNowPlaying:(BOOL)a0;
- (void)_replacePlaceholderViewWithView:(id)a0;
- (BOOL)_shouldLimitLists;
- (void)_showLoadingScreen;
- (void)_showTimeoutScreen;
- (void)_updateNowPlayingButtonVisibility;
- (void)container:(id)a0 didInvalidateIndicies:(id)a1;
- (void)containerDidChangeCount:(id)a0;
- (void)errorViewDidTapButton:(id)a0;
- (id)initWithContainer:(id)a0 tabbedBrowsing:(BOOL)a1;

@end
