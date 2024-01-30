@class NSDate, NSString, GKLocalPlayer, UINavigationController, NSMutableArray, RemoteUIController, GKDispatchGroup, UIViewController;

@interface GKLocalPlayerAuthenticator : NSObject <RemoteUIControllerDelegate>

@property (retain, nonatomic) RemoteUIController *remoteU13Controller;
@property (retain, nonatomic) UINavigationController *u13NavigationController;
@property (retain, nonatomic) NSMutableArray *u13ObjectModels;
@property (retain, nonatomic) GKDispatchGroup *u13Group;
@property (nonatomic) BOOL userShouldSkipCreateAppleID;
@property BOOL forceAuthentication;
@property (retain) GKLocalPlayer *resultantLocalPlayer;
@property (retain) GKLocalPlayer *inputLocalPlayer;
@property (retain) NSString *alertTitle;
@property (retain) NSString *alertMessage;
@property (getter=isAuthenticated) BOOL authenticated;
@property (getter=isAuthenticating) BOOL authenticating;
@property (retain) NSDate *lastAuthDate;
@property (retain) NSString *lastAuthPlayerID;
@property (copy) NSString *username;
@property (copy) NSString *password;
@property UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authenticatorForPlayerWithUsername:(id)a0 password:(id)a1;
+ (id)authenticatorForPlayerWithUsername:(id)a0 password:(id)a1 withPresentingViewController:(id)a2;
+ (void)postURL:(id)a0 postBody:(id)a1 completion:(id /* block */)a2;
+ (id)authenticatorForExistingPlayer:(id)a0;
+ (id)authenticatorForExistingPlayer:(id)a0 withPresentingViewController:(id)a1;
+ (BOOL)shouldDisableLoginConsideringSharePlayAvailabilityWithAuthenticateResponse:(id)a0;

- (void)applicationDidEnterBackground:(id)a0;
- (void)authenticateWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (BOOL)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)remoteUIControllerDidDismiss:(id)a0;
- (void)authenticateUsingAuthUIAllowingAppleIDCreation:(BOOL)a0 usernameEditable:(BOOL)a1 dismissHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)authenticateUsingAuthUIWithAuthUIDismissHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldAuthenticateForGameCenter;
- (void)_authenticateUsingAuthUI:(BOOL)a0 authenticationResults:(id)a1 usernameEditable:(BOOL)a2 authUIDismissHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_handleAuthResponse:(id)a0 error:(id)a1 handler:(id /* block */)a2;
- (void)authenticateExistingUserAuthUIWithCompletionHandler:(id /* block */)a0;
- (void)authenticateFromExternalServiceWithAuthenticationResults:(id)a0 withHandler:(id /* block */)a1;
- (void)authenticateUsingAuthUIWithCompletionHandler:(id /* block */)a0;
- (void)authenticateWithAuthKitResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)authenticationDidComplete;
- (void)cancelAuthDueToAuthKitErrorWithHandler:(id /* block */)a0;
- (void)handleAuthKitResultsForUnder13WithContinuationData:(id)a0 altDSID:(id)a1 password:(id)a2;

@end
