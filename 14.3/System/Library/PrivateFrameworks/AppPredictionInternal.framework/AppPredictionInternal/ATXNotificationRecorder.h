@class ATXScreenRepresentation, NSMutableDictionary, _ATXAppLaunchCategoricalHistogram, _ATXAppLaunchHistogram, ATXNotificationsLogger, NSObject, NSMutableString;
@protocol OS_dispatch_queue;

@interface ATXNotificationRecorder : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ATXScreenRepresentation *_onLockScreen;
    ATXScreenRepresentation *_offScreen;
    NSMutableDictionary *_recordsTable;
    NSMutableDictionary *_relatedApps;
    _ATXAppLaunchCategoricalHistogram *_notificationsHistory;
    _ATXAppLaunchHistogram *_appHistory;
    ATXNotificationsLogger *_logger;
    NSMutableString *_logCache;
}

- (id)init;
- (void)clearAllAtTimestamp:(id)a0;
- (void).cxx_destruct;
- (void)expungeExpiredRecordsWithCacheOption:(BOOL)a0;
- (void)reset;
- (void)resetNotificationsHistory;
- (void)_appendRecordToCache:(id)a0;
- (void)insertTapCoalesceEvent:(id)a0 bundleId:(id)a1 timestamp:(id)a2;
- (void)logRecordInAggd:(id)a0;
- (void)insertAppLaunchEvent:(id)a0 timestamp:(id)a1;
- (void)insertEvent:(long long)a0 timestamp:(id)a1 notificationID:(id)a2 enableLogCache:(BOOL)a3;
- (void)_addNotificationsRecord:(id)a0;
- (void)insertEvent:(long long)a0 timestamp:(id)a1 notificationID:(id)a2;
- (id)flushLogCache;
- (void)expungeExpiredRecords;
- (id)flushRecords;
- (void)getPositionForId:(id)a0 position:(unsigned long long *)a1 onlockscreen:(BOOL *)a2;

@end
