@class NSUUID, CPSSectionedDataSource, NSTimer, CPSTableView, CPSEmptyView, CPListTemplate, CPUINowPlayingManager, NSString;

@interface CPSListTemplateViewController : CPSBaseTemplateViewController <UITableViewDelegate, CPUINowPlayingObserving, CPListTemplateProviding>

@property (retain, nonatomic) CPSSectionedDataSource *dataSource;
@property (copy, nonatomic) NSUUID *currentSpinningIdentifier;
@property (copy, nonatomic) NSUUID *nextSpinningIdentifier;
@property (nonatomic) unsigned long long spinnerState;
@property (retain, nonatomic) NSTimer *spinnerStartTimer;
@property (retain, nonatomic) NSTimer *spinnerTimeoutTimer;
@property (readonly, nonatomic) CPListTemplate *listTemplate;
@property (retain, nonatomic) CPSTableView *tableView;
@property (retain, nonatomic) CPUINowPlayingManager *nowPlayingManager;
@property (retain, nonatomic) CPSEmptyView *emptyView;
@property (retain, nonatomic) NSUUID *lastFocusedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (void)tableView:(id)a0 didUpdateFocusInContext:(id)a1 withAnimationCoordinator:(id)a2;
- (void)_scrollViewAccessoryInsetsDidChange:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)restoresFocusAfterTransition;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setButton:(id)a0 enabled:(BOOL)a1;
- (void)reloadTemplate:(id)a0;
- (void)reloadItems:(id)a0;
- (void)_viewDidLoad;
- (void)nowPlayingManager:(id)a0 didUpdateSnapshot:(id)a1;
- (id)initWithListTemplate:(id)a0 templateDelegate:(id)a1 templateEnvironment:(id)a2;
- (BOOL)_wantsNowPlayingButton;
- (long long)_playingIndicatorStateForSnapshot:(id)a0;
- (void)_updateEmptyView;
- (BOOL)_shouldRetainFocusOnWillAppear;
- (void)_startSpinnerTimerFired:(id)a0 identifier:(id)a1;
- (void)_timeoutSpinnerFired:(id)a0 identifier:(id)a1;
- (void)_addSpinnerToIdentifier:(id)a0;
- (void)_cellSelectionCompleted:(id)a0;
- (void)_cancelScheduledLoadingSpinner;
- (void)_updateFocusForReload;
- (void)_activateSiriForMessageItem:(id)a0;
- (void)_scheduleLoadingSpinnerForIdentifier:(id)a0;
- (void)setButton:(id)a0 hidden:(BOOL)a1;

@end
