@class SSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SSKeychain : NSObject {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_sendMessage:(id)a0 completionBlock:(id /* block */)a1;
- (void)createAttestationDataForAccountIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)createAttestationDataForAccountIdentifier:(id)a0 purpose:(long long)a1 completionBlock:(id /* block */)a2;
- (void)createX509CertChainDataForAccountIdentifier:(id)a0 purpose:(long long)a1 completionBlock:(id /* block */)a2;
- (void)deleteKeychainTokensForAccountIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)getPublicKeyDataForAccountIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)getPublicKeyDataForAccountIdentifier:(id)a0 purpose:(long long)a1 completionBlock:(id /* block */)a2;
- (void)keyCountForAccountIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)signData:(id)a0 context:(id)a1 completionBlock:(id /* block */)a2;
- (void)signData:(id)a0 reason:(id)a1 fallback:(id)a2 cancel:(id)a3 forAccountIdentifier:(id)a4 completionBlock:(id /* block */)a5;
- (void)x509CertChainDataForAccountIdentifier:(id)a0 purpose:(long long)a1 regenerateCerts:(BOOL)a2 completionBlock:(id /* block */)a3;

@end
