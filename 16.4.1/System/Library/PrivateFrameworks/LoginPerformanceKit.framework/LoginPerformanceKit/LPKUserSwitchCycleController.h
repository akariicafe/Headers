@protocol LPKUserSwitchCycleResponder;

@interface LPKUserSwitchCycleController : NSObject

@property (weak, nonatomic) id<LPKUserSwitchCycleResponder> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isLoginSession;
- (void)interruptLocalUserSwitchTest;
- (void)_updateLocalPerfTestCycleCount:(long long)a0;
- (void)_clearOutLocalPerfTestDefaults;
- (unsigned long long)_currentEnvironment;
- (void)_fixTestStatesForRetry;
- (void)_loginAccount:(id)a0 password:(id)a1 localLoginOnly:(BOOL)a2 delay:(double)a3;
- (void)_scheduleRetryWithTimeout:(double)a0;
- (BOOL)_setUserSwitchDestinationExpectation:(unsigned long long)a0;
- (void)_triggerFastLogoutWithDelay:(double)a0;
- (void)_triggerFullLogoutWithDelay:(double)a0;
- (BOOL)_validateUserSwitchExpectation;
- (BOOL)startUserSwitchWithType:(unsigned long long)a0 count:(long long)a1 username:(id)a2 password:(id)a3;
- (BOOL)triggerTestUserSwitchIfNeeded;

@end
