@class _ATXInternalNotification;

@interface ATXInternalActionPredictionUpdatedNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotification;

- (id)init;
- (void).cxx_destruct;
- (void)registerForNotificationsWithUpdateBlock:(id /* block */)a0;

@end
