@class NSObject, NSArray, NSString, PSSpecifier, ACAccountStore, NSNumber, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface PUIPrivacyController : PSListController <CoreTelephonyClientCarrierBundleDelegate, PSListControllerTestableSpecifiers> {
    int profileInstalledToken;
    int profileUninstalledToken;
    NSObject<OS_dispatch_queue> *securitySettingsQueue;
    PSSpecifier *_locationSpecifier;
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) CoreTelephonyClient *_client;
@property (retain, nonatomic) NSNumber *_cachedLocationServicesAvailableValue;
@property (retain, nonatomic) NSArray *driverBundleControllers;
@property (retain, nonatomic) NSArray *driverSpecifiers;
@property (nonatomic) BOOL launchHasCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;
+ (void)formatSearchEntries:(id)a0 parent:(id)a1;

- (void)carrierBundleChange:(id)a0;
- (id)_accountStore;
- (void)reloadSpecifiers;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (id)locationServicesEnabled:(id)a0;
- (void)setCapabilityEnabled:(id)a0 specifier:(id)a1;
- (id)capabilityEnabled:(id)a0;
- (id)developerModeEnabled:(id)a0;
- (id)driverKitSpecifiers;
- (id)lockdownModeEnabled:(id)a0;
- (void)refreshLocationServicesAvailable;
- (void)updateLocationServicesVisibility;
- (void)updateSecurityGroup;

@end
