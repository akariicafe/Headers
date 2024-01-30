@class NSArray, PSSpecifier;

@interface VUIAccountSettingsConnectedAppsViewController : PSListController {
    PSSpecifier *_appGroup;
    NSArray *_appSpecifiers;
}

- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (long long)_alertStyle;
- (void)_stopAppSpinner;
- (id)_accessStatusForSpecifier:(id)a0;
- (void)_addPrivacyFooterToGroup:(id)a0;
- (id)_appGroupSpecifier;
- (void)_loadAppGroup;
- (void)_promptToDisableChannel:(id)a0 withExternalID:(id)a1;
- (void)_promptToEnableChannel:(id)a0 withExternalID:(id)a1;
- (void)_showPrivacySheet:(id)a0;
- (void)_showVppaExpiredPrompt:(id)a0;
- (void)_startAppSpinner;
- (void)_toggleSpecifier:(id)a0 sender:(id)a1;

@end
