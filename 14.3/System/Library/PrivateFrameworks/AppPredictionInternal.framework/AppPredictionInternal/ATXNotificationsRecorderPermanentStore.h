@class ATXLockscreenTracker, ATXNotificationsDedupeTracker, NSDate, NSObject, ATXNotificationRecorder;
@protocol OS_dispatch_source;

@interface ATXNotificationsRecorderPermanentStore : ATXNotificationsDatabase {
    NSObject<OS_dispatch_source> *_timer;
    ATXNotificationRecorder *_internalRecorder;
    ATXLockscreenTracker *_lockscreenTracker;
    ATXNotificationsDedupeTracker *_dedupeTracker;
}

@property (retain) NSDate *lastUpdate;

- (id)init;
- (void)submitGrading:(id)a0 rating:(id)a1 category:(id)a2 userId:(id)a3;
- (void).cxx_destruct;
- (void)replay;
- (void)resetNotificationsHistory;
- (void)insertTapCoalesceEvent:(id)a0 bundleId:(id)a1 timestamp:(id)a2;
- (BOOL)migrate;
- (id)getLockscreenBundleIds;
- (void)addNotificationsRecordWithMetadata:(id)a0 timestamp:(id)a1 notificationID:(id)a2;
- (void)insertAppLaunchEvent:(id)a0 timestamp:(id)a1;
- (id)createCustomSchema;
- (void)replayWithCallback:(id /* block */)a0;
- (void)addNotificationRecordInRecentStore:(id)a0 timestamp:(id)a1;
- (void)insertEvent:(long long)a0 timestamp:(id)a1 notificationID:(id)a2;
- (long long)latestVersion;
- (void)addNotificationsRecordWithSerializedMetadata:(id)a0 timestamp:(id)a1 notificationID:(id)a2;

@end
