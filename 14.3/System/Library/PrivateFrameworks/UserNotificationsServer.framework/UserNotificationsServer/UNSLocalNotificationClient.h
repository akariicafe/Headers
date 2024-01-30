@class UNSLocationMonitor, NSString, PCPersistentTimer, UNSNotificationScheduleRepository, UNSNotificationRepository, UNSPendingNotificationRepository, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface UNSLocalNotificationClient : NSObject <UNSLocationMonitorObserver> {
    NSString *_bundleIdentifier;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationScheduleRepository *_notificationScheduleRepository;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
    NSMutableArray *_lazy_pendingNotificationsAwaitingDelivery;
    UNSLocationMonitor *_locationMonitor;
    PCPersistentTimer *_localNotificationTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _monitoringLocaleAndTimeChanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dateFormatter;
- (void)_fireNotification:(id)a0;
- (void)_setRequestDateForPendingNotificationRecords:(id)a0;
- (id)undeliveredNotificationRecords;
- (void)_queue_triggerDidFireForDate:(id)a0;
- (void)addPendingNotificationRecords:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_queue_triggerDidFireForTimer:(id)a0;
- (id)_lastLocalNotificationFireDate;
- (void)_setLastLocalNotificationFireDate:(id)a0;
- (void)_invalidatePendingNotificationRecordRegionMonitors;
- (void)_queue_triggerDidFireForRegion:(id)a0;
- (void)handleLocaleChange;
- (void)_invalidatePendingNotificationRecordTimers;
- (void)_setPendingNotificationRecords:(id)a0;
- (void)_setMonitoredRegions:(id)a0;
- (void)_updateTimersAndRegionMonitorsForPendingNotificationRecords:(id)a0;
- (void)locationMonitor:(id)a0 triggerDidFireForRegion:(id)a1 forBundleIdentifier:(id)a2;
- (void)_invalidateNotificationRecordTimersAndRegionMonitors;
- (void)_updateRegionMonitorsForPendingNotificationRecords:(id)a0;
- (id)initWithNotificationRepository:(id)a0 pendingNotificationRepository:(id)a1 notificationScheduleRepository:(id)a2 locationMonitor:(id)a3 bundleIdentifier:(id)a4 queue:(id)a5;
- (id)_pendingNotificationRecords;
- (void)removeAllPendingNotificationRecords;
- (void)_updateTimersForPendingNotificationRecords:(id)a0;
- (void)setPendingNotificationRecords:(id)a0;
- (void)handleSignificantTimeChange;
- (void)handleApplicationStateRestore;
- (void)removePendingNotificationRecords:(id)a0;
- (void)invalidate;
- (id)pendingNotificationRecords;
- (id)_sanitizeNotificationRecords:(id)a0;
- (void)removePendingNotificationRecordsWithIdentifiers:(id)a0;

@end
