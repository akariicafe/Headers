@class DCXPCDisconnectionHandler, NSString, NSXPCConnection;
@protocol DCBiometricStoreXPCProtocol;

@interface DCBiometricStoreClient : NSObject <DCBiometricStoreXPCProtocol>

@property (retain) NSXPCConnection *serverConnection;
@property (retain) id<DCBiometricStoreXPCProtocol> remoteObjectProxy;
@property (retain) DCXPCDisconnectionHandler *disconnectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteGlobalAuthACLWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)prearmCredentialWithAuthorizationToken:(id)a0 completion:(id /* block */)a1;
- (void)establishPrearmTrust:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void)nonceForAuthorizationTokenWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)globalAuthACLWithCompletion:(id /* block */)a0;
- (void)globalAuthACLTemplateUUIDsWithCompletion:(id /* block */)a0;
- (void)revokeCredentialAuthorizationToken:(id /* block */)a0;
- (void)bioBindingUnboundACL:(id /* block */)a0;
- (void)passcodeBindingUnboundACL:(id /* block */)a0;
- (void)setGlobalAuthACL:(id)a0 ofType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)setModifiedGlobalAuthACL:(id)a0 externalizedLAContext:(id)a1 completion:(id /* block */)a2;
- (void)generatePhoneTokenWithNonce:(id)a0 keyBlob:(id)a1 pairingID:(id)a2 completion:(id /* block */)a3;
- (void)generatePrearmTrustCertificateWithNonce:(id)a0 pairingID:(id)a1 completion:(id /* block */)a2;

@end
