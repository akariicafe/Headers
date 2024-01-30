@class AFSettingsConnection;

@interface AFUICloudStorageViewController : PSListController {
    AFSettingsConnection *_settings;
}

- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)_disableAndDeleteCloudSync;
- (void)confirmDisable;
- (void)confirmDisableForMultiUserVoiceIdentification;
- (void)handleDisableAndDeleteButtonPress;

@end
