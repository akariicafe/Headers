@class NSString, UIViewController;

@interface AAUICustodianRecoveryApprovalController : NSObject {
    NSString *_recoverySessionID;
    UIViewController *_presenter;
}

@property (nonatomic) BOOL isResetEligible;

+ (id)approvalControllerWithPresenter:(id)a0 recoverySessionID:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_promptForRecoveryCodeWithCompletion:(id /* block */)a0;
- (void)_validateRecoveryCode:(id)a0 withCompletion:(id /* block */)a1;
- (void)validateRecoveryCodeWithCompletion:(id /* block */)a0;
- (id)_actionsForRecoveryCodeAlert:(id)a0 completion:(id /* block */)a1;

@end
