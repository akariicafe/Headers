@class ATXNotificationsActionPredictionRecord, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ATXLockscreenTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_recordsTable;
    ATXNotificationsActionPredictionRecord *_current;
}

- (void)insertEvent:(long long)a0 timestamp:(id)a1 notificationID:(id)a2;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)getBundleIds;
- (id)init;
- (BOOL)addNotificationId:(id)a0 withBundle:(id)a1 timestamp:(id)a2;
- (BOOL)addNotificationRecord:(id)a0 timestamp:(id)a1;

@end
