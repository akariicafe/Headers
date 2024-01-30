@class NSString, AAFXPCSession;

@interface AKWalrusController : NSObject <AAFXPCSessionDelegate> {
    AAFXPCSession *_remoteService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)PCSAuthContextForWebSessionUUID:(id)a0 serviceName:(id)a1 completion:(id /* block */)a2;
- (void)PCSAuthContextForWebSessionIdentifier:(id)a0 serviceName:(id)a1 completion:(id /* block */)a2;
- (void)postWalrusStateUpdateToServerWithContext:(id)a0 urlBagKey:(id)a1 username:(id)a2 password:(id)a3 completion:(id /* block */)a4;
- (void)removeAllPCSAuthCredentialWithCompletion:(id /* block */)a0;
- (void)verifyEnableWalrusAllowedWithContext:(id)a0 completion:(id /* block */)a1;

@end
