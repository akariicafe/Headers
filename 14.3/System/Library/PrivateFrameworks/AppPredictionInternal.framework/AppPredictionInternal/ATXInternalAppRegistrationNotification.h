@class _ATXInternalNotification;

@interface ATXInternalAppRegistrationNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithInstallDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)registerForNotificationsWithRegisterBlock:(id /* block */)a0;

@end
