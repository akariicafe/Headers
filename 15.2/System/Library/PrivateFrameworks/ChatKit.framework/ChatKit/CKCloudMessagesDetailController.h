@class UIProgressHUD, STStoragePlugin;

@interface CKCloudMessagesDetailController : PSListController {
    STStoragePlugin *_plugin;
}

@property (retain, nonatomic) UIProgressHUD *cloudKitProgressView;

+ (id)specifier;

- (id)specifiers;
- (id)dataSize:(id)a0;
- (void)undoDelete:(id)a0;
- (void)setEnabledDidReturned:(id)a0;
- (void)disableAndDelete:(id)a0;
- (void)hideSpinner;
- (void)tryToDisableAllDevicesDidReturn:(id)a0;
- (id)cloudDocsSpecifiers;
- (void)showSpinnerMessage:(id)a0;
- (void)_displayiCloudErrorMessage;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
