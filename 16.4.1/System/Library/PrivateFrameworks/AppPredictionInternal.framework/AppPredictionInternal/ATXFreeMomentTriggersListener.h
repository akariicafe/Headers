@class ATXCoreDuetContextHelper, _CDContextualChangeRegistration;
@protocol ATXFreeMomentTriggersListenerDelegate;

@interface ATXFreeMomentTriggersListener : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    _CDContextualChangeRegistration *_phoneUnlockRegistration;
    _CDContextualChangeRegistration *_appLaunchRegistration;
}

@property (weak, nonatomic) id<ATXFreeMomentTriggersListenerDelegate> freeMomentTriggersListenerDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)clientIdentifierForAppLaunch;
- (id)clientIdentifierForPhoneUnlock;
- (void)registerForAppLaunchNotification:(id)a0;
- (void)registerPhoneLockStatus:(id)a0;
- (id)registrationIdentifierForAppLaunch;
- (id)registrationIdentifierForPhoneUnlock;

@end
