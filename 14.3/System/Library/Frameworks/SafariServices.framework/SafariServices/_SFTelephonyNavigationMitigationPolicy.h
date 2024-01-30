@class NSDate;
@protocol _SFDialogPresenting;

@interface _SFTelephonyNavigationMitigationPolicy : NSObject {
    long long _classification;
    NSDate *_dateUserLastDeclined;
}

@property (weak, nonatomic) id<_SFDialogPresenting> dialogPresenter;

+ (double)test_suspiciousClassificationExpirationDuration;

- (void).cxx_destruct;
- (void)_handleInput:(long long)a0;
- (void)userDeclinedCallPrompt;
- (void)_checkIfSuspiciousClassificationHasExpiredAndTransitionIfNeeded;
- (void)handleNavigationToURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)userAcceptedCallPrompt;
- (BOOL)policyAppliesToURL:(id)a0;

@end
