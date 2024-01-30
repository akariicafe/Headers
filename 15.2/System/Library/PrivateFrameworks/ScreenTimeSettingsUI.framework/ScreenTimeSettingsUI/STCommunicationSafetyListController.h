@class STCommunicationSafetyOnboardingController, PSSpecifier;

@interface STCommunicationSafetyListController : STPINListViewController

@property (retain, nonatomic) PSSpecifier *checkSpecifier;
@property (retain, nonatomic) STCommunicationSafetyOnboardingController *onboardingController;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)setCoordinator:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (BOOL)_isFeatureEnabled;
- (id)_createUnsafePhotosGroupSpecifier;
- (id)_createCheckForUnsafePhotosSpecifier;
- (id)_createViewChildSafetyResourcesGroupSpecifier;
- (id)_createViewChildSafetyResourcesSpecifier;
- (void)_openChildSafetyWebsite;
- (void)_setCheckForUnsafePhotos:(id)a0 specifier:(id)a1;
- (id)_checkForUnsafePhotos:(id)a0;
- (void)_showChildSafetyResources;
- (void)_dismissChildSafetyResourcesView:(id)a0;
- (void)_setCheckForUnsafePhotos:(BOOL)a0;
- (void)_persistSettings;
- (void)_showCommunicationSafetyCompatibilityAlertIfNeeded;
- (void)_acknowledgeIntroScreens;
- (BOOL)_hasAcknowledgedIntroScreens;

@end
