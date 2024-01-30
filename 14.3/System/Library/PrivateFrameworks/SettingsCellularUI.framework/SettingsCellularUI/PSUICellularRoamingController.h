@class PSSpecifier;

@interface PSUICellularRoamingController : PSListController {
    PSSpecifier *_voiceRoamingSpecifier;
    PSSpecifier *_dataRoamingSpecifier;
    PSSpecifier *_cdmaRoamingSpecifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (void)roamingOptionsDidChange;
- (id)getDataRoamingStatus:(id)a0;
- (void)setDataRoamingEnabled:(id)a0 specifier:(id)a1;
- (id)getEUInternetStatus:(id)a0;
- (void)setEUInternetEnabled:(id)a0 specifier:(id)a1;
- (void)setCDMARoamingEnabled:(id)a0 specifier:(id)a1;
- (id)getCDMARoamingStatus:(id)a0;
- (void)newCarrierNotification;
- (void)cellularPlanChangedNotification:(id)a0;
- (void)reloadRoamingStatus;
- (id)_voiceRoamingFooterTextWithVoiceRoamingOn:(BOOL)a0;
- (void)setVoiceRoamingEnabled:(id)a0 specifier:(id)a1;
- (id)getVoiceRoamingStatus:(id)a0;
- (id)dataRoamingSpecifiers;
- (id)cdmaRoamingSpecifiers;
- (id)getDataRoamingStatusForService:(id)a0 specifier:(id)a1;
- (void)setDataRoamingEnabledForService:(id)a0 enabled:(id)a1 specifier:(id)a2;

@end
