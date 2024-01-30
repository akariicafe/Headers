@class CTServiceDescriptor, PSSpecifier;

@interface PSUICellularDataOptionsController : PSListController {
    PSSpecifier *_parentSpecifier;
    CTServiceDescriptor *_serviceDescriptor;
}

- (id)init;
- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)dealloc;
- (id)specifiers;
- (id)roamingSpecifiers;
- (void)roamingOptionsDidChange;
- (id)initWithParentSpecifier:(id)a0;
- (id)roamingSpecifierforSubscription;
- (id)roamingSettingsDescription:(id)a0;
- (id)getDataRoamingStatus:(id)a0;
- (id)getDataRoamingStatusForService:(id)a0;
- (void)setDataRoamingEnabled:(id)a0 specifier:(id)a1;
- (void)setDataRoamingEnabledForService:(id)a0 specifier:(id)a1;
- (id)getEUInternetStatus:(id)a0;
- (void)setEUInternetCancelled:(id)a0;
- (void)setEUInternetEnabledConfirmed:(id)a0;
- (void)setEUInternetEnabled:(id)a0 specifier:(id)a1;
- (void)setCDMARoamingEnabled:(id)a0 specifier:(id)a1;
- (id)getCDMARoamingStatus:(id)a0;

@end
