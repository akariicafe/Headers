@class ACAccountStore, MSAlertManager;

@interface MSAuthenticationManager : NSObject {
    int _state;
    MSAlertManager *_alertManager;
    ACAccountStore *_acAccountStore;
    int _bagRefetchCount;
}

@property (nonatomic) BOOL isListeningToKeybagChanges;
@property (nonatomic) int keybagChangeNotifyToken;
@property (readonly, nonatomic, getter=isWaitingForAuth) BOOL waitingForAuth;

+ (id)sharedManager;

- (void)waitForDeviceUnlock;
- (void)_didReceiveAccountConfigChangedNotification;
- (void)didEncounterAuthenticationSuccessForPersonID:(id)a0;
- (void)dealloc;
- (void)didEncounterAuthenticationFailureForPersonID:(id)a0;
- (void)rearmAuthenticationAlert;
- (id)initWithAlertManager:(id)a0;
- (void).cxx_destruct;
- (void)_renewCredentialsForAccount:(id)a0;

@end
