@class ATXLockscreenTracker, ATXNotificationsDedupeTracker, NSDate, NSObject, ATXNotificationRecorder;
@protocol OS_dispatch_source;

@interface ATXNotificationsRecorderPermanentStore : ATXAbstractVersionedDatabase {
    NSObject<OS_dispatch_source> *_timer;
    ATXNotificationRecorder *_internalRecorder;
    ATXLockscreenTracker *_lockscreenTracker;
    ATXNotificationsDedupeTracker *_dedupeTracker;
}

@property (retain) NSDate *lastUpdate;

- (BOOL)migrate;
- (void)insertTapCoalesceEvent:(id)a0 bundleId:(id)a1 timestamp:(id)a2;
- (id)getLockscreenBundleIds;
- (void)resetNotificationsHistory;
- (void)insertEvent:(long long)a0 timestamp:(id)a1 notificationID:(id)a2;
- (void)submitGrading:(id)a0 rating:(id)a1 category:(id)a2 userId:(id)a3;
- (long long)latestVersion;
- (void)addNotificationRecordInRecentStore:(id)a0 timestamp:(id)a1;
- (id)createCustomSchema;
- (void)replay;
- (void).cxx_destruct;
- (id)init;
- (void)addNotificationsRecordWithSerializedMetadata:(id)a0 timestamp:(id)a1 notificationID:(id)a2;
- (void)replayWithCallback:(id /* block */)a0;
- (void)insertAppLaunchEvent:(id)a0 timestamp:(id)a1;
- (void)addNotificationsRecordWithMetadata:(id)a0 timestamp:(id)a1 notificationID:(id)a2;

@end
