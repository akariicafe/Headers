@class NSString, PSSpecifier, ACAccountStore, NSNumber, CoreTelephonyClient;

@interface PUIPrivacyController : PSListController <CoreTelephonyClientCarrierBundleDelegate, PSListControllerTestableSpecifiers> {
    PSSpecifier *_locationSpecifier;
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) CoreTelephonyClient *_client;
@property (retain, nonatomic) NSNumber *_cachedLocationServicesAvailableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)formatSearchEntries:(id)a0 parent:(id)a1;
+ (id)booleanCapabilitiesToTest;

- (void)carrierBundleChange:(id)a0;
- (id)specifiers;
- (id)locationServicesEnabled:(id)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;
- (id)init;
- (id)_accountStore;
- (void)updateLocationServicesVisibility;
- (void)refreshLocationServicesAvailable;
- (void)setCapabilityEnabled:(id)a0 specifier:(id)a1;
- (id)capabilityEnabled:(id)a0;

@end
