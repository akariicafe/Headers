@class NSNumber, PSSpecifier;

@interface SUSUISoftwareUpdateAutomaticUpdateController : PSListController

@property (retain, nonatomic) PSSpecifier *automaticUpdateGroup;
@property (retain, nonatomic) PSSpecifier *automaticUpdateSwitchSpecifier;
@property (retain, nonatomic) PSSpecifier *automaticDownloadGroup;
@property (retain, nonatomic) PSSpecifier *automaticDownloadSwitchSpecifier;
@property (retain, nonatomic) NSNumber *userSpecifiedAutoUpdateValue;

- (id)specifiers;
- (void)setAutomaticUpdatesFromUI:(id)a0 forSpecifier:(id)a1;
- (void)setAutomaticDownloadFromUI:(id)a0 forSpecifier:(id)a1;
- (id)updateController;
- (id)automaticUpdateStatus;
- (void).cxx_destruct;
- (id)automaticDownloadStatus;
- (void)setupAutoUpdateSwitchSpecifier;
- (void)setupAutoDownloadSwitchSpecifier;
- (void)armedAutoUpdateForAutomaticUpdatesToggled:(id)a0 forSpecifier:(id)a1;
- (void)autoUpdateSwitchedToggledWithNoArmedUpdate:(id)a0 forSpecifier:(id)a1;
- (void)refreshAutomaticUpdateGroupFooter;
- (void)addAutomaticUpdateGroupFooter;
- (void)clearAutomaticUpdateGroupFooter;

@end
