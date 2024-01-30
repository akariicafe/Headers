@class NSString, SFAirDropDiscoveryController, CCUIContentModuleDetailTransitioningDelegate, CCUIContentModuleDetailClickPresentationInteractionManager;

@interface CCUIConnectivityAirDropViewController : CCUIConnectivityButtonViewController <SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryAlertControllerDelegate, MCProfileConnectionObserver, CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> {
    SFAirDropDiscoveryController *_airDropDiscoveryController;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
    CCUIContentModuleDetailClickPresentationInteractionManager *_clickPresentationInteractionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (void)buttonTapped:(id)a0;
- (void)_updateState;
- (BOOL)_isEduModeEnabled;
- (BOOL)_isAirDropRestricted;
- (id)displayName;
- (void)discoveryControllerSettingsDidChange:(id)a0;
- (void)stopObservingStateChanges;
- (void)startObservingStateChanges;
- (BOOL)_canShowWhileLocked;
- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;
- (id)_newAirDropMenuViewController;
- (id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)a0;
- (void)viewDidLoad;
- (void)discoveryControllerVisibilityDidChange:(id)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateAirDropControlAsEnabled:(BOOL)a0;
- (id)_everyoneMenuItemTextKey;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
