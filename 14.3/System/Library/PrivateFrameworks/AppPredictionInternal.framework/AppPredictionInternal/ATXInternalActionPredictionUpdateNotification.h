@class _ATXInternalNotification;

@interface ATXInternalActionPredictionUpdateNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithCacheRefreshTTL:(double)a0 reason:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)registerForNotificationsWithUpdateBlock:(id /* block */)a0;

@end
