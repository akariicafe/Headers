@class _ATXInternalNotification;

@interface ATXInternalAppsInstallStartNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithInstallStartDictionary:(id)a0;

- (void)registerForNotificationsWithInstallStartBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
