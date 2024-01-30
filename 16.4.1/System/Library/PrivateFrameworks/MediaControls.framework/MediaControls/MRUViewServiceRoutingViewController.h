@class MRUNowPlayingController, MRUViewServiceRoutingView, MediaControlsEndpointsManager, UITableViewDiffableDataSource, MPAVOutputDeviceRoutingDataSource, NSMutableDictionary, MPMediaControlsConfiguration, MRUVendorSpecificDeviceManager, NSString, UIViewController, MRUVisualStylingProvider, MRURoutingViewController;
@protocol MRUViewServiceRoutingViewControllerDelegate;

@interface MRUViewServiceRoutingViewController : UIViewController <MediaControlsEndpointsManagerDelegate, MRUNowPlayingControllerObserver, MRURoutingViewControllerDelegate, UITableViewDelegate, UITableViewDelegatePrivate>

@property (retain, nonatomic) MRUViewServiceRoutingView *view;
@property (retain, nonatomic) MRUViewServiceRoutingView *viewIfLoaded;
@property (retain, nonatomic) MediaControlsEndpointsManager *endpointsManager;
@property (retain, nonatomic) MRURoutingViewController *routingViewController;
@property (retain, nonatomic) MPAVOutputDeviceRoutingDataSource *outputDeviceRoutingDataSource;
@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSMutableDictionary *nowPlayingControllers;
@property (retain, nonatomic) MRUNowPlayingController *selectedNowPlayingController;
@property (copy, nonatomic) id /* block */ replaceRoutes;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (nonatomic) BOOL canShowRemoteDevices;
@property (nonatomic) BOOL supportsQueueHandoff;
@property (retain, nonatomic) UIViewController *alertViewController;
@property (retain, nonatomic) MRUVendorSpecificDeviceManager *vendorSpecificManager;
@property (retain, nonatomic) MPMediaControlsConfiguration *configuration;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (weak, nonatomic) id<MRUViewServiceRoutingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)routingViewControllerDidUpdateItems:(id)a0;
- (void)didSelectListState:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHaveFullLengthBottomSeparatorForSection:(long long)a1;
- (void)updateDiscoveryMode;
- (void)updateCellForIdentifier:(id)a0;
- (void)routingViewController:(id)a0 didSelectRoutingViewItem:(id)a1;
- (BOOL)nowPlayingControllerShouldAutomaticallyUpdateResponse:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)updateSelectedViewController;
- (void)nowPlayingController:(id)a0 metadataController:(id)a1 didChangeNowPlayingInfo:(id)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)nowPlayingController:(id)a0 endpointController:(id)a1 didChangeRoute:(id)a2;
- (void)endpointsManager:(id)a0 activeSystemRouteDidChange:(id)a1;
- (void)updateCell:(id)a0 forIdentifier:(id)a1;
- (id)selectedIdentifier;
- (void)nowPlayingController:(id)a0 didChangeQuickControlItem:(id)a1;
- (void)updateNowPlayingControllers;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)updateMoreButtonVisibility;
- (void)endpointsManager:(id)a0 defersRoutesReplacement:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)didSelectQuickControl:(id)a0;
- (void)loadView;
- (void)nowPlayingController:(id)a0 metadataController:(id)a1 didChangeArtwork:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canShowMoreButton;
- (void)updateRoutingViewController;
- (void)updateRoutingViewControllerScrollIndicatorInsets;

@end
