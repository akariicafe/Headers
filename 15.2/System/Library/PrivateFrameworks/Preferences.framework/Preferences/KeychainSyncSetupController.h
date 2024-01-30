@class PSKeychainSyncManager;

@interface KeychainSyncSetupController : PSSetupController {
    PSKeychainSyncManager *_manager;
}

- (id)initWithManager:(id)a0;
- (void)cancelPressed;
- (void).cxx_destruct;
- (void)showController:(id)a0;

@end
