@class ATXCoreDuetContextHelper, _CDContextualChangeRegistration, NSUserDefaults;

@interface ATXMotionStateListener : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    _CDContextualChangeRegistration *_motionStateRegistration;
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (id)init;
- (void)registerForMotionStateNotification:(id)a0;
- (id)registrationIdentifierForMotionState;
- (id)clientIdentifierForMotionState;
- (id /* block */)motionStateChangeCallback;
- (long long)motionStateWithIntegerValue:(long long)a0;

@end
