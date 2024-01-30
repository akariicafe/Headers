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

- (void)insertTapCoalesceEvent:(id)a0 bundleId:(id)a1 timestamp:(id)a2;
- (void)_addNotificationsRecord:(id)a0;
- (void)resetNotificationsHistory;
- (void)logRecordInAggd:(id)a0;
- (void)insertEvent:(long long)a0 timestamp:(id)a1 notificationID:(id)a2;
- (void)_appendRecordToCache:(id)a0;
- (void)clearAllAtTimestamp:(id)a0;
- (void)expungeExpiredRecords;
- (void).cxx_destruct;
- (id)init;
- (void)getPositionForId:(id)a0 position:(unsigned long long *)a1 onlockscreen:(BOOL *)a2;
- (void)insertEvent:(long long)a0 timestamp:(id)a1 notificationID:(id)a2 enableLogCache:(BOOL)a3;
- (id)flushLogCache;
- (id)flushRecords;
- (void)expungeExpiredRecordsWithCacheOption:(BOOL)a0;
- (void)reset;
- (void)insertAppLaunchEvent:(id)a0 timestamp:(id)a1;

@end
