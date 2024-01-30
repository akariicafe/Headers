@class _ATXInternalNotification;

@interface ATXInternalOffloadAppsNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithOffloadSet:(id)a0;

- (void)registerForNotificationWithOffloadBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
