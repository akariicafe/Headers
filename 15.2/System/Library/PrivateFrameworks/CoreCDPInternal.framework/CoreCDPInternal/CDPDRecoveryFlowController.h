@class CDPDCircleController, CDPDRecoveryFlowContext, CDPDSecureBackupController, NSString;
@protocol CDPStateUIProviderInternal, CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPDRecoveryFlowController : NSObject <CDPDDeviceSecretValidatorDelegate>

@property (retain, nonatomic) CDPDRecoveryFlowContext *recoveryContext;
@property (retain, nonatomic) CDPDCircleController *circleController;
@property (retain, nonatomic) CDPDSecureBackupController *secureBackupController;
@property (retain, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (retain, nonatomic) id<CDPRemoteDeviceSecretValidatorProtocol> validator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)recoveryValidatorWithDevices:(id)a0 forMultipleICSC:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)beginInteractiveRecoveryForDevices:(id)a0 isUsingMultipleICSC:(BOOL)a1 usingValidator:(id)a2;
- (void)retrieveInflatedDevices:(id /* block */)a0;
- (unsigned long long)_escapeOfferForDevices:(id)a0;
- (void)secretValidator:(id)a0 recoverSecureBackupWithContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)secretValidator:(id)a0 shouldContinueValidationAfterError:(id)a1;
- (id)initWithContext:(id)a0 uiProvider:(id)a1 secureBackupController:(id)a2 circleProxy:(id)a3;
- (void)beginRecovery:(id /* block */)a0;

@end
