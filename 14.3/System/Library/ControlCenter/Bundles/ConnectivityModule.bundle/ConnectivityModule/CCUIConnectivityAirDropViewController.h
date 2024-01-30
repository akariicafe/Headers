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
- (void).cxx_destruct;
- (BOOL)_isEduModeEnabled;
- (void)_updateState;
- (void)buttonTapped:(id)a0;
- (void)discoveryControllerVisibilityDidChange:(id)a0;
- (void)_updateAirDropControlAsEnabled:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)startObservingStateChanges;
- (void)stopObservingStateChanges;
- (BOOL)_isAirDropRestricted;
- (id)_newAirDropMenuViewController;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)a0;
- (void)discoveryControllerSettingsDidChange:(id)a0;
- (void)viewDidLoad;
- (id)displayName;

@end
