@class SUManagerClient, PSSpecifier;

@interface SUSUISoftwareUpdateAutomaticUpdateController : PSListController

@property (retain, nonatomic) PSSpecifier *automaticUpdateGroup;
@property (retain, nonatomic) PSSpecifier *automaticUpdateSwitchSpecifier;
@property (retain, nonatomic) PSSpecifier *automaticDownloadGroup;
@property (retain, nonatomic) PSSpecifier *automaticDownloadSwitchSpecifier;
@property (retain, nonatomic) PSSpecifier *securityResponseGroup;
@property (retain, nonatomic) PSSpecifier *securityResponseSwitchSpecifier;
@property (retain, nonatomic) PSSpecifier *systemDataFilesGroup;
@property (retain, nonatomic) PSSpecifier *systemDataFilesSwitchSpecifier;
@property (retain, nonatomic) SUManagerClient *manager;

- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isChinaDevice;
- (id)updateController;
- (void)addAutomaticDownloadGroupFooter;
- (void)addAutomaticInstallSystemDataFilesGroupFooter;
- (void)addAutomaticUpdateGroupFooter;
- (void)addSecurityResponseGroupFooter;
- (void)armedAutoUpdateForAutomaticUpdatesToggled:(id)a0 forSpecifier:(id)a1;
- (void)autoUpdateSwitchedToggledWithNoArmedUpdate:(id)a0 forSpecifier:(id)a1;
- (id)automaticDownloadStatus;
- (id)automaticInstallSystemDataFilesStatus;
- (id)automaticUpdateStatus;
- (id)previousUserSpecifiedAutomaticUpdateStatus;
- (id)previousUserSpecifiedSecurityResponseStatus;
- (id)securityResponseStatus;
- (void)setAutoInstallToggleState:(id)a0 toggleCellEnabled:(id)a1 userSpecified:(BOOL)a2 specifier:(id)a3;
- (void)setAutomaticDownloadFromUI:(id)a0 forSpecifier:(id)a1;
- (void)setAutomaticInstallSystemDataFilesFromUI:(id)a0 forSpecifier:(id)a1;
- (void)setAutomaticUpdatesFromUI:(id)a0 forSpecifier:(id)a1;
- (void)setSecurityResponseFromUI:(id)a0 forSpecifier:(id)a1;
- (void)setSecurityResponseToggleState:(id)a0 toggleCellEnabled:(id)a1 userSpecified:(BOOL)a2 specifier:(id)a3;
- (void)setupAutoDownloadSwitchSpecifier;
- (void)setupAutoInstallSystemDataFilesSpecifier;
- (void)setupAutoUpdateSwitchSpecifier;
- (void)setupSecurityResponseSpecifier;

@end
