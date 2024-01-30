@class PSSpecifier, PSUIAppDataUsageGroup, NSString, CoreTelephonyClient;

@interface CTUIWirelessUsageAndAppPolicyController : PSListController <CoreTelephonyClientSubscriberDelegate>

@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) PSUIAppDataUsageGroup *appDataUsageGroup;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property BOOL shouldCalculateUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (id)selectSpecifier:(id)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)_handleNewCarrierNotification:(id)a0;
- (void)_handleCellularPlanChangedNotification:(id)a0;
- (void)_handleWirelessDataUsageChangedNotification:(id)a0;
- (void)managedConfigurationSettingsDidChange;
- (void)managedConfigurationProfileListDidChange;

@end
