@class _ATXInternalNotification;

@interface ATXInternalMagicalMomentsAppPredictionNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithPredictions:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationsWithBlock:(id /* block */)a0;

@end
