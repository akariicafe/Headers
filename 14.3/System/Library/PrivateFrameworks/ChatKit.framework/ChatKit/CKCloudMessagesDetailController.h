@class UIProgressHUD, STStorageApp, STStoragePlugin;

@interface CKCloudMessagesDetailController : PSListController {
    STStorageApp *_messagesApp;
    STStoragePlugin *_plugin;
}

@property (retain, nonatomic) UIProgressHUD *cloudKitProgressView;

+ (id)specifier;

- (id)init;
- (void).cxx_destruct;
- (id)specifiers;
- (id)dataSize:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)hideSpinner;
- (void)undoDelete:(id)a0;
- (void)setEnabledDidReturned:(id)a0;
- (void)tryToDisableAllDevicesDidReturn:(id)a0;
- (void)disableAndDelete:(id)a0;
- (id)cloudDocsSpecifiers;
- (void)showSpinnerMessage:(id)a0;
- (void)_displayiCloudErrorMessage;

@end
