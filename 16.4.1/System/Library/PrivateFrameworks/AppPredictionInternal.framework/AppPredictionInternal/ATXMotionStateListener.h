@class ATXCoreDuetContextHelper, _CDContextualChangeRegistration, NSUserDefaults;

@interface ATXMotionStateListener : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    _CDContextualChangeRegistration *_motionStateRegistration;
    NSUserDefaults *_userDefaults;
}

- (id)init;
- (void).cxx_destruct;
- (id)clientIdentifierForMotionState;
- (id /* block */)motionStateChangeCallback;
- (long long)motionStateWithIntegerValue:(long long)a0;
- (void)registerForMotionStateNotification:(id)a0;
- (id)registrationIdentifierForMotionState;

@end
