@class FBServiceClientAuthenticator;

@interface FBSystemAppProxyServiceServer : FBSServiceFacility {
    FBServiceClientAuthenticator *_shutdownAuthenticator;
    FBServiceClientAuthenticator *_keyboardFocusAuthenticator;
}

+ (id)sharedInstance;
+ (id)targetQueue;

- (void)noteClientDidConnect:(id)a0 withMessage:(id)a1;
- (void)_handleTerminateApplication:(id)a0 forClient:(id)a1;
- (void).cxx_destruct;
- (void)_handleGetPasscodeLockedOrBlockedStatus:(id)a0 forClient:(id)a1;
- (id)_initWithQueue:(id)a0;
- (void)_handleSetKeyboardFocusApplication:(id)a0 forClient:(id)a1;
- (void)_handleSystemApplicationBundleIdentifier:(id)a0 forClient:(id)a1;
- (void)_handleActions:(id)a0 forClient:(id)a1;
- (void)_handleTerminateApplicationGroup:(id)a0 forClient:(id)a1;
- (void)noteClientDidDisconnect:(id)a0;
- (void)_handleGetProcessHandle:(id)a0 forClient:(id)a1;
- (void)noteDidReceiveMessage:(id)a0 withType:(long long)a1 fromClient:(id)a2;
- (void)_handleShutdown:(id)a0 forClient:(id)a1;

@end
