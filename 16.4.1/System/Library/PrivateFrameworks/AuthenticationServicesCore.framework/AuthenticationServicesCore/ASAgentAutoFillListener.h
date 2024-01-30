@class NSString, NSXPCListener, NSHashTable;
@protocol ASPublicKeyCredentialManagerInterface;

@interface ASAgentAutoFillListener : NSObject <NSXPCListenerDelegate, WBSAuthenticationServicesAgentInterface, ASPasskeyAutoFillManagerDelegate> {
    NSXPCListener *_listener;
    id<ASPublicKeyCredentialManagerInterface> _publicKeyCredentialManager;
    NSHashTable *_weakActiveConnections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)test_createPasskeyWithUserName:(id)a0 displayName:(id)a1 relyingPartyIdentifier:(id)a2 userHandle:(id)a3 completionHandler:(id /* block */)a4;
- (void)newPasskeysAvailableForApplicationIdentifier:(id)a0;
- (void)userSelectedAutoFillNearbyDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPasskeysForRunningAssertionWithWebFrameIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPasskeysForRunningAssertionWithApplicationIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)userSelectedAutoFillPasskey:(id)a0 authenticatedLAContext:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithPublicKeyCredentialManager:(id)a0;

@end
