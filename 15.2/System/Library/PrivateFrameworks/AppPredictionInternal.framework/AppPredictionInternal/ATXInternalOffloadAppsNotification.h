@class _ATXInternalNotification;

@interface ATXInternalOffloadAppsNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithOffloadSet:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationWithOffloadBlock:(id /* block */)a0;

@end
