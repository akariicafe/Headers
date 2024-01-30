@class _ATXInternalNotification;

@interface ATXInternalMagicalMomentsAppPredictionNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithPredictions:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)registerForNotificationsWithBlock:(id /* block */)a0;

@end
