@class _ATXInternalNotification;

@interface ATXInternalActionPredictionUpdatedNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotification;

- (void).cxx_destruct;
- (id)init;
- (void)registerForNotificationsWithUpdateBlock:(id /* block */)a0;

@end
