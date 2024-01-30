@class NSString, AAFXPCSession;

@interface AKFidoUIController : NSObject <AAFXPCSessionDelegate, AKFidoInterface>

@property (retain, nonatomic) AAFXPCSession *remoteService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithXPCSession:(id)a0;
- (void)registerFidoKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)verifyFidoKeyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)verifyFidoKeyWithFidoContext:(id)a0 completion:(id /* block */)a1;
- (void)verifyFidoRecoveryWithContext:(id)a0 recoveryToken:(id)a1 completion:(id /* block */)a2;

@end
