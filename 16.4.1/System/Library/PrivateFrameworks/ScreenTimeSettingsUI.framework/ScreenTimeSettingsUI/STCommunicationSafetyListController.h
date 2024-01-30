@class STCommunicationSafetyOnboardingController, PSSpecifier;

@interface STCommunicationSafetyListController : STPINListViewController

@property (retain, nonatomic) PSSpecifier *checkSpecifier;
@property (retain, nonatomic) PSSpecifier *enableAnalyticsSpecifier;
@property (retain, nonatomic) STCommunicationSafetyOnboardingController *onboardingController;

- (void)setCoordinator:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_isCommunicationSafetyAnalyticsEnabled;
- (id)_createEnableAnalyticsSpecifier;
- (void)_acknowledgeAnalyticsTip;
- (void)_acknowledgeIntroScreens;
- (id)_checkForUnsafePhotos:(id)a0;
- (id)_createCheckForUnsafePhotosSpecifier;
- (id)_createEnableAnalyticsGroupSpecifier;
- (id)_createUnsafePhotosGroupSpecifier;
- (id)_createViewChildSafetyResourcesGroupSpecifier;
- (id)_createViewChildSafetyResourcesSpecifier;
- (void)_disableAnalyticsIfNeeded;
- (void)_dismissChildSafetyResourcesView:(id)a0;
- (id)_getEnableAnalytics:(id)a0;
- (BOOL)_hasAcknowledgedIntroScreens;
- (BOOL)_isAnyCommunicationSafetySettingEnabled;
- (void)_openAboutAnalytics;
- (void)_openChildSafetyWebsite;
- (void)_persistSettings;
- (void)_setCheckForUnsafePhotos:(BOOL)a0;
- (void)_setCheckForUnsafePhotos:(id)a0 specifier:(id)a1;
- (void)_setEnableAnalytics:(BOOL)a0;
- (void)_setEnableAnalytics:(id)a0 specifier:(id)a1;
- (void)_showChildSafetyResources;
- (void)_showCommunicationSafetyCompatibilityAlertIfNeeded;

@end
