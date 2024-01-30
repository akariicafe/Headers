@class AFSettingsConnection;

@interface AFUICloudStorageViewController : PSListController {
    AFSettingsConnection *_settings;
}

- (id)specifiers;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)handleDisableAndDeleteButtonPress;
- (void)confirmDisableForMultiUserVoiceIdentification;
- (void)confirmDisable;
- (void)_disableAndDeleteCloudSync;

@end
