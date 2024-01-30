@class CTServiceDescriptor, PSSpecifier;

@interface PSUICellularDataOptionsController : PSListController {
    PSSpecifier *_parentSpecifier;
    CTServiceDescriptor *_serviceDescriptor;
}

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)airplaneModeChanged;
- (void)dealloc;
- (id)roamingSpecifiers;
- (void)roamingOptionsDidChange;
- (id)initWithParentSpecifier:(id)a0;
- (id)roamingSpecifierforSubscription;
- (id)roamingSettingsDescription:(id)a0;
- (id)getDataRoamingStatus:(id)a0;
- (id)getDataRoamingStatusForService:(id)a0;
- (void)setDataRoamingEnabled:(id)a0 specifier:(id)a1;
- (void)setDataRoamingEnabledForService:(id)a0 specifier:(id)a1;
- (void)setCDMARoamingEnabled:(id)a0 specifier:(id)a1;
- (id)getCDMARoamingStatus:(id)a0;

@end
