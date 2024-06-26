@class CARSessionStatus, MPAVRoutingController, NSMapTable, MPAVClippingTableView, UITableView, MPVolumeGroupSliderCoordinator, NSDictionary, UIColor, MPAVEndpointRoute, NSString, MPAVRoute, MPSectionedCollection, NSMutableSet, MPWeakTimer, NSNumber, NSArray, MPAVRoutingViewControllerUpdate;
@protocol MPAVRoutingViewControllerThemeDelegate, MPAVRoutingViewControllerDelegate;

@interface MPAVRoutingViewController : UIViewController <CARSessionObserving, UITableViewDataSource, UITableViewDelegate, MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, _MPStateDumpPropertyListTransformable> {
    MPAVClippingTableView *_tableView;
    MPAVRoutingViewControllerUpdate *_pendingUpdate;
    MPAVRoutingViewControllerUpdate *_optimisticUpdate;
    BOOL _isAnimatingUpdate;
    MPAVRoute *_displayedEndpointRoute;
    MPSectionedCollection *_routingViewItems;
    NSArray *_cachedPickedRoutes;
    NSArray *_cachedDisplayableAvailableRoutes;
    NSArray *_cachedPendingPickedRoutes;
    NSArray *_cachedDisplayAsPickedRoutes;
    NSArray *_cachedVolumeCapableRoutes;
    NSDictionary *_cachedRouteGrouping;
    NSMutableSet *_expandedGroupUIDs;
    MPWeakTimer *_updateTimer;
    MPAVRoutingController *_routingController;
    long long _routeDiscoveryMode;
    UIColor *_tableCellsBackgroundColor;
    UIColor *_tableCellsContentColor;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
    BOOL _needsDisplayedRoutesUpdate;
    BOOL _suspendedDiscoveryModeDueToApplicationState;
    BOOL _shouldAutomaticallyUpdateRoutesList;
    BOOL _shouldPickRouteOnSelection;
    BOOL _onScreen;
    BOOL _hasUserSelections;
    CARSessionStatus *_carPlayStatus;
    unsigned long long _updatesSincePresentation;
    long long _discoveryModeBeforeEnteringBackground;
}

@property (readonly, nonatomic, getter=isInCarPlay) BOOL inCarPlay;
@property (weak, nonatomic) id<MPAVRoutingViewControllerThemeDelegate> themeDelegate;
@property (readonly, nonatomic) MPAVRoutingController *_routingController;
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute;
@property (readonly, nonatomic) UITableView *_tableView;
@property (readonly, nonatomic) double _normalCellHeight;
@property (readonly, nonatomic) double _expandedCellHeight;
@property (nonatomic, getter=_continuousCornerRadius, setter=_setContinuousCornerRadius:) double continuousCornerRadius;
@property (retain, nonatomic, setter=_setTableCellsBackgroundColor:) UIColor *_tableCellsBackgroundColor;
@property (retain, nonatomic, setter=_setTableCellsContentColor:) UIColor *_tableCellsContentColor;
@property (nonatomic, setter=_setShouldAutomaticallyUpdateRoutesList:) BOOL _shouldAutomaticallyUpdateRoutesList;
@property (nonatomic, setter=_setShouldPickRouteOnSelection:) BOOL _shouldPickRouteOnSelection;
@property (retain, nonatomic) NSMapTable *outputDeviceVolumeSliders;
@property (retain, nonatomic) MPVolumeGroupSliderCoordinator *groupSliderCoordinator;
@property (nonatomic) BOOL sortByIsVideoRoute;
@property (readonly, nonatomic) unsigned long long style;
@property (weak, nonatomic) id<MPAVRoutingViewControllerDelegate> delegate;
@property (nonatomic, setter=setAVItemType:) long long avItemType;
@property (nonatomic) unsigned long long mirroringStyle;
@property (nonatomic) unsigned long long iconStyle;
@property (nonatomic) BOOL allowMirroring;
@property (copy, nonatomic) NSNumber *discoveryModeOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sessionDidConnect:(id)a0;
- (id)_stateDumpObject;
- (id)initWithStyle:(unsigned long long)a0;
- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)_unregisterNotifications;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)dealloc;
- (void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)a0;
- (void)sessionDidDisconnect:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)_createVolumeSlider;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)_crashLogDateFormatter;
- (id)_generatePropertyListFromUpdateDisplayedRoutesState:(id)a0 exception:(id)a1;
- (id)_writeToDiskWithUpdateDisplayedRoutesStatePropertyList:(id)a0 error:(id *)a1;
- (void)_applyUpdate:(id)a0;
- (id)_alertControllerForUpdateDisplayedRoutesCrashWithLogFileURL:(id)a0 exception:(id)a1;
- (void)_endUpdates;
- (BOOL)isInVehicle;
- (void)routingCell:(id)a0 mirroringSwitchValueDidChange:(BOOL)a1;
- (void)routingCellDidTapToExpand:(id)a0;
- (void)_initWithStyle:(unsigned long long)a0 routingController:(id)a1;
- (id)initWithStyle:(unsigned long long)a0 routingController:(id)a1;
- (BOOL)hasCarKitRoute;
- (void)resetDisplayedRoutes;
- (void)resetScrollPosition;
- (void)registerTableViewCells;
- (BOOL)shouldOverrideContentSizeCategory:(id)a0;
- (void)enqueueRefreshUpdate;
- (BOOL)_wouldShareAudioForPickedRoute:(id)a0 operation:(long long)a1 pickedRoutes:(id)a2;
- (void)_diplayShareAudioDisabledAlertForReason:(id)a0;
- (double)_tableViewHeightAccordingToDataSource;
- (BOOL)_operationRequiresOptimisticState:(long long)a0 routes:(id)a1;
- (void)_endRouteDiscovery;
- (void)_configureCell:(id)a0 forIndexPath:(id)a1;
- (void)_registerCarPlayObserver;
- (void)_beginRouteDiscovery;
- (void)_setRouteDiscoveryMode:(long long)a0;
- (void)_setupUpdateTimerIfNecessary;
- (void)_setNeedsRouteDiscoveryModeUpdate;
- (void)_setNeedsDisplayedRoutesUpdate;
- (id)_displayableRoutesInRoutes:(id)a0;
- (id)_displayAsPickedRoutesInRoutes:(id)a0;
- (id)_volumeCapableRoutesInRoutes:(id)a0;
- (void)_createUpdateWithCompletion:(id /* block */)a0;
- (void)_updateDisplayedRoutes;
- (void)setOptimisticUpdate:(id)a0;
- (void)_enqueueUpdate:(id)a0;
- (id)_createRefreshUpdate;
- (id)_createReloadUpdate;
- (id)endpointGroupUID;
- (void)updateExpandedGroups;
- (id)groupUIDForRoute:(id)a0;
- (double)_tableViewHeaderViewHeight;
- (double)_tableViewFooterViewHeight;
- (BOOL)_shouldDisplayRouteAsPicked:(id)a0;
- (id)_createRoutingViewItemsForRoutes:(id)a0;
- (void)_collapseAllGroups;
- (id)_createSectionedCollection:(id)a0 withPickedRoutes:(id)a1;
- (BOOL)shouldGroupRoutingViewItems;
- (void)viewDidAppear:(BOOL)a0;
- (void)_registerNotifications;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)routingController:(id)a0 didFailToPickRouteWithError:(id)a1;
- (void)routingController:(id)a0 pickedRoutesDidChange:(id)a1;
- (void)routingController:(id)a0 shouldHijackRoute:(id)a1 alertStyle:(long long)a2 busyRouteName:(id)a3 presentingAppName:(id)a4 completion:(id /* block */)a5;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
