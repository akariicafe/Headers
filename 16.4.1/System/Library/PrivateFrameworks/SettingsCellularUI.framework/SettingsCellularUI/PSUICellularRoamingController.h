@class PSSpecifier;

@interface PSUICellularRoamingController : PSListController {
    PSSpecifier *_voiceRoamingSpecifier;
    PSSpecifier *_dataRoamingSpecifier;
    PSSpecifier *_cdmaRoamingSpecifier;
    struct __CTServerConnection { } *_serverConnection;
}

- (id)getLogger;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)newCarrierNotification;
- (id)_voiceRoamingFooterTextWithVoiceRoamingOn:(BOOL)a0;
- (id)cdmaRoamingSpecifiers;
- (void)cellularPlanChangedNotification:(id)a0;
- (id)dataRoamingSpecifiers;
- (id)getCDMARoamingStatus:(id)a0;
- (id)getDataRoamingStatus:(id)a0;
- (id)getDataRoamingStatusForService:(id)a0 specifier:(id)a1;
- (id)getVoiceRoamingStatus:(id)a0;
- (void)reloadRoamingStatus;
- (void)roamingOptionsDidChange;
- (void)setCDMARoamingEnabled:(id)a0 specifier:(id)a1;
- (void)setDataRoamingEnabled:(id)a0 specifier:(id)a1;
- (void)setVoiceRoamingEnabled:(id)a0 specifier:(id)a1;

@end
