@class PSKeychainSyncManager;

@interface KeychainSyncSetupController : PSSetupController {
    PSKeychainSyncManager *_manager;
}

- (id)initWithManager:(id)a0;
- (void)showController:(id)a0;
- (void).cxx_destruct;
- (void)cancelPressed;

@end
