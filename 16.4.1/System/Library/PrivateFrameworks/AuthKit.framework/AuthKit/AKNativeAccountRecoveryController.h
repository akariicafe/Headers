@class NSString, CDPRecoveryController, AKAccountRecoveryContext;
@protocol CDPStateUIProvider;

@interface AKNativeAccountRecoveryController : NSObject <CDPAuthProvider> {
    CDPRecoveryController *_recoveryController;
    AKAccountRecoveryContext *_recoveryContext;
    id<CDPStateUIProvider> _cdpUiProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)postBodyForiCSCServerUIResponseWithContext:(id)a0 recoveryError:(id)a1;
+ (id)requestForRecoveryCompletionWithContext:(id)a0 recoveredInfo:(id)a1 recoveryError:(id)a2;
+ (BOOL)shouldSendServerResponseForRecoveredInfo:(id)a0 withRecoveryError:(id)a1;

- (void).cxx_destruct;
- (void)cdpContext:(id)a0 verifyMasterKey:(id)a1 completion:(id /* block */)a2;
- (id)_mapICSCRecoveryResultsToAuthKit:(id)a0;
- (void)cdpContext:(id)a0 performSilentRecoveryTokenRenewal:(id /* block */)a1;
- (void)dismissNativeRecoveryUIWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 uiProvider:(id)a1;
- (void)presentNativeRecoveryUIWithCompletion:(id /* block */)a0;

@end
