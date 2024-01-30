@class _TRUserNotification;

@interface TRUserNotificationManager : NSObject

@property (retain, nonatomic) _TRUserNotification *activeUserNotification;

+ (id)sharedInstance;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_showUserNotificationWithDictionary:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)requestAuthenticationWithAccountID:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)requestAppleIDAuthenticationWithAccountID:(id)a0 completion:(id /* block */)a1;
- (void)presentErrorWithTitle:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)requestPermissionToInitiateSetupWithCompletion:(id /* block */)a0;
- (void)presentAuthenticationFailureWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)requestPermissionForDiagnosticSubmissionWithCompletion:(id /* block */)a0;
- (void)presentWiFiNetworkConnectionError:(BOOL)a0 completion:(id /* block */)a1;
- (void)requestLegacyAuthenticationWithAccountID:(id)a0 completion:(id /* block */)a1;
- (void)presentLegacyAuthenticationFailedDialogWithMessage:(id)a0 completion:(id /* block */)a1;

@end
