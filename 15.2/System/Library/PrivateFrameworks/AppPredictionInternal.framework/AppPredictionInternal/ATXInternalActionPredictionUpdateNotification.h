@class _ATXInternalNotification;

@interface ATXInternalActionPredictionUpdateNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithCacheRefreshTTL:(double)a0 reason:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationsWithUpdateBlock:(id /* block */)a0;

@end
