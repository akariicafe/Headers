@class AFSettingsConnection;

@interface AFUICloudStorageViewController : PSListController {
    AFSettingsConnection *_settings;
}

- (void).cxx_destruct;
- (id)specifiers;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)handleDisableAndDeleteButtonPress;
- (void)confirmDisableForMultiUserVoiceIdentification;
- (void)confirmDisable;
- (void)_disableAndDeleteCloudSync;

@end
