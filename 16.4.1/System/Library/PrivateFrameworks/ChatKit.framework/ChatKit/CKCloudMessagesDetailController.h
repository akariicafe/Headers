@class STStoragePlugin, UIProgressHUD;
@protocol IMDaemonMultiplexedConnectionManaging;

@interface CKCloudMessagesDetailController : PSListController

@property (retain, nonatomic) STStoragePlugin *plugin;
@property (retain, nonatomic) UIProgressHUD *cloudKitProgressView;
@property (retain, nonatomic) id<IMDaemonMultiplexedConnectionManaging> daemonConnection;

+ (id)specifier;

- (void)disconnectFromDaemon;
- (void)connectToDaemon;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_displayiCloudErrorMessage;
- (id)cloudDocsSpecifiers;
- (id)dataSize:(id)a0;
- (void)disableAndDelete:(id)a0;
- (void)hideSpinner;
- (void)setEnabledDidReturned:(id)a0;
- (void)showSpinnerMessage:(id)a0;
- (void)tryToDisableAllDevicesDidReturn:(id)a0;
- (void)undoDelete:(id)a0;

@end
