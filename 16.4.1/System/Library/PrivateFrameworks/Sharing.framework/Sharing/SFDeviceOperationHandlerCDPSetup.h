@class NSString, CDPContext, CDPStateController, SFSession, NSObject;
@protocol OS_dispatch_queue;

@interface SFDeviceOperationHandlerCDPSetup : NSObject <CDPStateUIProvider> {
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    BOOL _invalidateCalled;
    id /* block */ _responseHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL failIfCDPNotEnabled;
@property (copy, nonatomic) NSString *altDSIDNeedingRepair;
@property (retain, nonatomic) SFSession *sfSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_activate;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_handleCDPSetupRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForAdoptionOfMultipleICSC:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForBeneficiaryAccessKeyWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForICSCWithIsNumeric:(BOOL)a1 numericLength:(id)a2 isRandom:(BOOL)a3 validator:(id)a4;
- (void)cdpContext:(id)a0 promptForInteractiveAuthenticationWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForLocalSecretWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 offeringRemoteApproval:(BOOL)a2 validator:(id)a3;
- (void)cdpRecoveryFlowContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 validator:(id)a2;

@end
