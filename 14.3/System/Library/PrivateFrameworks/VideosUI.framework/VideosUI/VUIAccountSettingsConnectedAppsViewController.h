@class NSArray, PSSpecifier;

@interface VUIAccountSettingsConnectedAppsViewController : PSListController {
    PSSpecifier *_appGroup;
    NSArray *_appSpecifiers;
}

- (void).cxx_destruct;
- (id)specifiers;
- (long long)_alertStyle;
- (void)viewDidLoad;
- (id)_appGroupSpecifier;
- (void)_loadAppGroup;
- (void)_addPrivacyFooterToGroup:(id)a0;
- (void)_showPrivacySheet:(id)a0;
- (void)_toggleSpecifier:(id)a0 sender:(id)a1;
- (id)_accessStatusForSpecifier:(id)a0;
- (void)_stopAppSpinner;
- (void)_promptToDisableChannel:(id)a0 withExternalID:(id)a1;
- (void)_showVppaExpiredPrompt:(id)a0;
- (void)_promptToEnableChannel:(id)a0 withExternalID:(id)a1;
- (void)_startAppSpinner;

@end
