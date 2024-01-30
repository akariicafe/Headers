@class ATXCoreDuetContextHelper, _CDContextualChangeRegistration;
@protocol ATXFreeMomentTriggersListenerDelegate;

@interface ATXFreeMomentTriggersListener : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    _CDContextualChangeRegistration *_phoneUnlockRegistration;
    _CDContextualChangeRegistration *_appLaunchRegistration;
}

@property (weak, nonatomic) id<ATXFreeMomentTriggersListenerDelegate> freeMomentTriggersListenerDelegate;

- (void).cxx_destruct;
- (id)init;
- (void)registerPhoneLockStatus:(id)a0;
- (void)registerForAppLaunchNotification:(id)a0;
- (id)registrationIdentifierForAppLaunch;
- (id)clientIdentifierForAppLaunch;
- (id)registrationIdentifierForPhoneUnlock;
- (id)clientIdentifierForPhoneUnlock;

@end
