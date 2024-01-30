@class NSXPCConnection;

@interface MadGate : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)updateBasebandTicket:(struct __SecKey { } *)a0 baaCert:(struct __SecCertificate { } *)a1 baaIntermediateCert:(struct __SecCertificate { } *)a2 options:(id)a3 withCompletion:(id /* block */)a4;
- (id)init;
- (BOOL)handleActivationInfoWithSession:(id)a0 activationSignature:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)deactivateDevice:(id *)a0;
- (id)getActivationBuild:(id *)a0;
- (void)dealloc;
- (id)createTunnel1SessionInfo:(id *)a0;
- (id)createActivationInfo:(id *)a0;
- (BOOL)unbrickDevice:(id *)a0;
- (id)copyActivationRecord:(id *)a0;
- (BOOL)recertifyDeviceWithError:(id *)a0;
- (id)getUCRTActivationLockState:(id *)a0;
- (BOOL)isDeviceABrick:(id *)a0;
- (id)copyPCRTToken:(id *)a0;
- (id)getActivationState:(id *)a0;
- (BOOL)isUCRTAvailable:(id *)a0;
- (BOOL)reactivateDevice:(id *)a0;
- (id)createTunnel1ActivationInfo:(id)a0 options:(id)a1 error:(id *)a2;
- (id)issueClientCertificateLegacy:(id)a0 error:(id *)a1;
- (BOOL)isInFieldCollected:(id *)a0;
- (BOOL)handleActivationInfo:(id)a0 withError:(id *)a1;

@end
