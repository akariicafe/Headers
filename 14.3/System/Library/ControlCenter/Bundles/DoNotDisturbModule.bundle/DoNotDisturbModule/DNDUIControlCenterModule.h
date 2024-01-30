@class DNDLifetimeDetails, NSString, NSArray, DNDToggleManager, DNDModeAssertionService, DNDStateService, DNDModeAssertion, DNDLifetimeDetailsProvider, UIViewController, CCUIContentModuleContext, DNDState;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface DNDUIControlCenterModule : CCUIMenuModuleViewController <CCUIContentModule, DNDLifetimeDetailsProviderDelegate, DNDStateUpdateListener, DNDModeAssertionUpdateListener> {
    CCUIContentModuleContext *_contentModuleContext;
    BOOL _selectedOnExpansion;
    DNDStateService *_stateService;
    DNDModeAssertionService *_assertionService;
    DNDToggleManager *_toggleManager;
    DNDState *_currentState;
    DNDLifetimeDetailsProvider *_lifetimeDetailsProvider;
    NSArray *_availableLifetimeDetails;
    DNDLifetimeDetails *_currentAssertionLifetimeDetails;
}

@property (retain, nonatomic) DNDModeAssertion *currentAssertion;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)stateService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (void)modeAssertionService:(id)a0 didUpdateActiveModeAssertion:(id)a1;
- (void).cxx_destruct;
- (void)setContentModuleContext:(id)a0;
- (void)dealloc;
- (id)contentViewController;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (void)_refreshState;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (id)_statusTextForState:(id)a0;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)_observeSystemNotifications;
- (void)lifetimeDetailsProvider:(id)a0 didUpdateAvailableLifetimeDetails:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)_menuItemForLifeTimeDetails:(id)a0;
- (void)_unobserveSystemNotifications;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateDoNotDisturbMenuItemsIfExpanded;
- (void)_updateDoNotDisturbMenuItems;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_refreshStateWithSelected:(BOOL)a0 expanded:(BOOL)a1;
- (BOOL)_canShowWhileLocked;
- (void)_updateForDarkerSystemColorsChange;
- (void)viewDidLoad;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)_configureGlyphPackageDescription;

@end
