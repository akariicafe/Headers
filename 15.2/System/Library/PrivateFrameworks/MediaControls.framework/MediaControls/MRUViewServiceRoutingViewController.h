@class MPMediaControlsConfiguration, MRUViewServiceRoutingView, MediaControlsEndpointsManager, UITableViewDiffableDataSource, MPAVOutputDeviceRoutingDataSource, NSMutableDictionary, MRUEndpointMetadataController, NSString, UIViewController, MRUVisualStylingProvider, MRURoutingViewController;
@protocol MRUViewServiceRoutingViewControllerDelegate;

@interface MRUViewServiceRoutingViewController : UIViewController <MediaControlsEndpointsManagerDelegate, MRUEndpointMetadataControllerObserver, MRURoutingViewControllerDelegate, UITableViewDelegate, UITableViewDelegatePrivate>

@property (retain, nonatomic) MRUViewServiceRoutingView *view;
@property (retain, nonatomic) MRUViewServiceRoutingView *viewIfLoaded;
@property (retain, nonatomic) MediaControlsEndpointsManager *endpointsManager;
@property (retain, nonatomic) MRURoutingViewController *routingViewController;
@property (retain, nonatomic) MPAVOutputDeviceRoutingDataSource *outputDeviceRoutingDataSource;
@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSMutableDictionary *controllers;
@property (retain, nonatomic) MRUEndpointMetadataController *selectedController;
@property (copy, nonatomic) id /* block */ replaceRoutes;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (nonatomic) BOOL canShowRemoteDevices;
@property (nonatomic) BOOL supportsQueueHandoff;
@property (retain, nonatomic) UIViewController *alertViewController;
@property (retain, nonatomic) MPMediaControlsConfiguration *configuration;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (weak, nonatomic) id<MRUViewServiceRoutingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)metadataController:(id)a0 didLoadNewResponse:(id)a1;
- (void)updateCell:(id)a0 forIdentifier:(id)a1;
- (BOOL)metadataControllerShouldAutomaticallyUpdateReponse:(id)a0;
- (void)viewDidLoad;
- (void)didSelectQuickActionButton:(id)a0;
- (void)endpointsManager:(id)a0 activeSystemRouteDidChange:(id)a1;
- (void)updateHeader;
- (void)viewWillAppear:(BOOL)a0;
- (void)metadataControllerDidChangeState:(id)a0;
- (void)setState:(long long)a0;
- (void)metadataControllerDidUpdateRoutingAvailability:(id)a0;
- (void)updateDiscoveryMode;
- (void)metadataController:(id)a0 didUpdateApplicationIcon:(id)a1;
- (void)updateRoutingViewControllerContentEdgeInsets;
- (void)viewWillDisappear:(BOOL)a0;
- (void)metadataControllerRouteDidUpdate:(id)a0;
- (id)selectedIdentifier;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (void)endpointsManager:(id)a0 defersRoutesReplacement:(id /* block */)a1;
- (void)didSelectListState:(id)a0;
- (void)updateMoreButtonVisibility;
- (void)routingViewController:(id)a0 didSelectRoutingViewItem:(id)a1;
- (void)routingViewControllerDidUpdateItems:(id)a0;
- (BOOL)tableView:(id)a0 shouldHaveFullLengthBottomSeparatorForSection:(long long)a1;
- (void)updateCellForIdentifier:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)canShowMoreButton;
- (void)updateControllers;
- (void)updateRoutingViewController;
- (void)updateSelectedViewController;

@end
