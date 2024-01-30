@class NSString, AACustodianController, CDPContext;

@interface CDPUICustodianRecoveryController : NSObject {
    CDPContext *_context;
    NSString *_recoverySession;
    AACustodianController *_custodianController;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)_fetchRecoveryInfoWithCompletion:(id /* block */)a0;
- (void)startRecoverySessionWithCompletion:(id /* block */)a0;
- (void)validateRecoveryCode:(id)a0 withCompletion:(id /* block */)a1;

@end
