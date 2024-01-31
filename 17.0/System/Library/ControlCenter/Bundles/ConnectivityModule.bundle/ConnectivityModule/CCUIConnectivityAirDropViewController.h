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
- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)startObservingStateChanges;
- (id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)a0;
- (void)buttonTapped:(id)a0;
- (void)_updateState;
- (void)viewDidLoad;
- (void)stopObservingStateChanges;
- (BOOL)_isEduModeEnabled;
- (void)_updateAirDropControlAsEnabled:(BOOL)a0;
- (void)discoveryControllerSettingsDidChange:(id)a0;
- (void)discoveryControllerVisibilityDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)displayName;
- (BOOL)_isAirDropRestricted;
- (id)_newAirDropMenuViewController;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_everyoneMenuItemTextKey;

@end
