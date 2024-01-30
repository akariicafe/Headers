@class NSNumber, PSSpecifier;

@interface SUSUISoftwareUpdateAutomaticUpdateController : PSListController

@property (retain, nonatomic) PSSpecifier *automaticUpdateGroup;
@property (retain, nonatomic) PSSpecifier *automaticUpdateSwitchSpecifier;
@property (retain, nonatomic) PSSpecifier *automaticDownloadGroup;
@property (retain, nonatomic) PSSpecifier *automaticDownloadSwitchSpecifier;
@property (retain, nonatomic) NSNumber *userSpecifiedAutoUpdateValue;

- (void).cxx_destruct;
- (id)updateController;
- (id)specifiers;
- (void)setAutomaticUpdatesFromUI:(id)a0 forSpecifier:(id)a1;
- (void)setAutomaticDownloadFromUI:(id)a0 forSpecifier:(id)a1;
- (id)automaticUpdateStatus;
- (id)automaticDownloadStatus;
- (void)setupAutoUpdateSwitchSpecifier;
- (void)setupAutoDownloadSwitchSpecifier;
- (void)armedAutoUpdateForAutomaticUpdatesToggled:(id)a0 forSpecifier:(id)a1;
- (id)autoDownloadGroupFooterTextForAutomaticDownloadStatus:(id)a0;
- (void)refreshAutoDownloadText;

@end
