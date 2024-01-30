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
- (id)displayName;
- (id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateAirDropControlAsEnabled:(BOOL)a0;
- (void)stopObservingStateChanges;
- (id)_newAirDropMenuViewController;
- (BOOL)_canShowWhileLocked;
- (void)discoveryControllerSettingsDidChange:(id)a0;
- (BOOL)_isEduModeEnabled;
- (void)buttonTapped:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)discoveryControllerVisibilityDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startObservingStateChanges;
- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;
- (BOOL)_isAirDropRestricted;
- (void)_updateState;

@end
