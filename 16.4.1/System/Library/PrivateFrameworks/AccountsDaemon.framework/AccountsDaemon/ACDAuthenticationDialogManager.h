@class NSString, NSXPCListener, ACDQueueDictionary;

@interface ACDAuthenticationDialogManager : NSObject <ACDAuthenticationDialogManagerProtocol> {
    NSXPCListener *_authenticationDialogListener;
    ACDQueueDictionary *_dialogRequestQueues;
    NSString *_activeAccountID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openAuthenticationURL:(id)a0 forAccount:(id)a1 shouldConfirm:(BOOL)a2 completion:(id /* block */)a3;
- (void)openAuthenticationURLForAccount:(id)a0 withDelegateClassName:(id)a1 fromBundleAtPath:(id)a2 shouldConfirm:(BOOL)a3 completion:(id /* block */)a4;
- (id)init;
- (void).cxx_destruct;
- (void)contextForAuthenticationDialog:(id /* block */)a0;
- (BOOL)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)a0;
- (void)_launchDialogContainerAppForAccount:(id)a0 shouldConfirm:(BOOL)a1 completion:(id /* block */)a2;
- (void)authenticationDialogCrashed;
- (void)authenticationDialogDidFinishWithSuccess:(BOOL)a0 response:(id)a1;

@end
