@class _ATXInternalNotification;

@interface ATXInternalAppsInstallStartNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithInstallStartDictionary:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationsWithInstallStartBlock:(id /* block */)a0;

@end
