@class _ATXInternalNotification;

@interface _ATXInternalInstallNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithInstallDictionary:(id)a0;

- (void)registerForNotificationsWithInstallBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
