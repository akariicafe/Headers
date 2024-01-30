@class NSString, CDPContext, CDPDSecureBackupController, CDPDPCSController;
@protocol CDPDSecureBackupProxy, CDPDOctagonTrustProxy, CDPDCircleProxy, CDPDAuthProviderInternal, CDPAuthProviderInternal, CDPStateUIProviderInternal;

@interface CDPDRecoveryKeyController : NSObject <CDPDRecoveryKeyValidatorInternalDelegate> {
    CDPContext *_context;
    CDPDPCSController *_pcsController;
    CDPDSecureBackupController *_secureBackupController;
}

@property (retain, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (retain, nonatomic) id<CDPDCircleProxy> circleProxy;
@property (retain, nonatomic) id<CDPDSecureBackupProxy> sbProxy;
@property (retain, nonatomic) id<CDPDOctagonTrustProxy> otProxy;
@property (retain, nonatomic) id<CDPAuthProviderInternal> recoveryAuthProvider;
@property (retain, nonatomic) id<CDPDAuthProviderInternal> internalAuthProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)deleteRecoveryKey:(id /* block */)a0;
- (void)generateRandomRecoveryKey:(id /* block */)a0;
- (void)generateNewRecoveryKey:(id /* block */)a0;
- (id)initWithContext:(id)a0 uiProvider:(id)a1;
- (id)generateRecoveryKeyWithInfo:(id)a0 error:(id *)a1;
- (id)initWithContext:(id)a0 uiProvider:(id)a1 authProvider:(id)a2;
- (id)initWithContext:(id)a0 uiProvider:(id)a1 authProvider:(id)a2 circleProxy:(id)a3 secureBackupProxy:(id)a4 octagonTrustProxy:(id)a5 pcsProxy:(id)a6;
- (void)enableBackupWithRecoveryKey:(id)a0 completion:(id /* block */)a1;
- (void)recoverState:(id /* block */)a0;
- (void)recoverAndSynchronizeStateWithServer:(id /* block */)a0;
- (void)recoverDataUsingMasterKeyWithCompletion:(id /* block */)a0;

@end
