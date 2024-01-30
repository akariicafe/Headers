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
- (void)resetNotificationsHistory;
- (void)insertAppLaunchEvent:(id)a0 timestamp:(id)a1;
- (long long)latestVersion;
- (void)addNotificationsRecordWithMetadata:(id)a0 timestamp:(id)a1 notificationID:(id)a2;
- (void)insertTapCoalesceEvent:(id)a0 bundleId:(id)a1 timestamp:(id)a2;
- (void)replayWithCallback:(id /* block */)a0;
- (void)insertEvent:(long long)a0 timestamp:(id)a1 notificationID:(id)a2;
- (id)createCustomSchema;
- (void)replay;
- (id)getLockscreenBundleIds;
- (id)init;
- (void)addNotificationRecordInRecentStore:(id)a0 timestamp:(id)a1;
- (void)addNotificationsRecordWithSerializedMetadata:(id)a0 timestamp:(id)a1 notificationID:(id)a2;
- (void).cxx_destruct;

@end
