@protocol LPKUserSwitchCycleResponder;

@interface LPKUserSwitchCycleController : NSObject

@property (weak, nonatomic) id<LPKUserSwitchCycleResponder> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)_isLoginSession;
- (void)interruptLocalUserSwitchTest;
- (BOOL)triggerTestUserSwitchIfNeeded;
- (BOOL)_validateUserSwitchExpectation;
- (void)_clearOutLocalPerfTestDefaults;
- (void)_triggerFullLogoutWithDelay:(double)a0;
- (void)_updateLocalPerfTestCycleCount:(long long)a0;
- (void)_loginAccount:(id)a0 password:(id)a1 localLoginOnly:(BOOL)a2 delay:(double)a3;
- (void)_triggerFastLogoutWithDelay:(double)a0;
- (BOOL)_setUserSwitchDestinationExpectation:(unsigned long long)a0;
- (BOOL)startUserSwitchWithType:(unsigned long long)a0 count:(long long)a1 username:(id)a2 password:(id)a3;

@end
