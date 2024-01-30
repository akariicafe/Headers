@class ACAccount;

@interface AAUICDPWalrusStatusUpdateHook : AAUICDPStatusUpdateHook {
    ACAccount *_account;
}

- (id)initWithAppleAccount:(id)a0;
- (void).cxx_destruct;
- (id)additionalPayloadForAction:(id)a0 error:(id)a1;
- (id)changeControllerForAction:(id)a0;
- (void)postCompletionProcessingForAction:(id)a0 error:(id)a1;

@end
