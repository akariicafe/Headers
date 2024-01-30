@class NSString, CTXPCServiceSubscriptionContext;

@interface TPSSubscriberTelephonyController : TPSTelephonyController <CoreTelephonyClientSubscriberDelegate>

@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (nonatomic, getter=isSIMPasscodeLockEnabled) BOOL SIMPasscodeLockEnabled;
@property (nonatomic) long long SIMPasscodeRemainingAttempts;
@property (copy, nonatomic) NSString *SIMStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)simPinChangeRequestDidComplete:(id)a0 success:(BOOL)a1;
- (void)simLockSaveRequestDidComplete:(id)a0 success:(BOOL)a1;
- (void)simPinEntryErrorDidOccur:(id)a0 status:(id)a1;
- (void)simPukEntryErrorDidOccur:(id)a0 status:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSubscriptionContext:(id)a0;
- (id)getSIMStatus;
- (void)fetchSIMPasscodeLockEnabled;
- (void)fetchSIMPasscodeRemainingAttempts;
- (id)getSIMPasscodeRemainingAttemptsValue;
- (void)changePIN:(id)a0 newPin:(id)a1 completion:(id /* block */)a2;
- (void)setSIMLockEnabled:(BOOL)a0 pin:(id)a1 completion:(id /* block */)a2;
- (id)getSIMPasscodeLockEnabledValueWithError:(id *)a0;
- (void)fetchSIMPasscodeLockEnabledWithCompletion:(id /* block */)a0;
- (id)getSIMPasscodeRemainingAttemptsValueWithError:(id *)a0;
- (void)fetchSIMPasscodeRemainingAttemptsWithCompletion:(id /* block */)a0;
- (id)getSIMStatusWithError:(id *)a0;
- (void)fetchSIMStatusWithCompletion:(id /* block */)a0;
- (id)getSIMPasscodeLockEnabledValue;
- (void)changePIN:(id)a0 newPin:(id)a1;
- (void)setSIMLockEnabled:(BOOL)a0 pin:(id)a1;
- (void)presentSIMPasscodeAlert;
- (void)fetchSIMStatus;

@end
