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

- (void)removePendingNotificationRecords:(id)a0;
- (void)handleSignificantTimeChange;
- (void)setPendingNotificationRecords:(id)a0;
- (id)undeliveredNotificationRecords;
- (id)initWithNotificationRepository:(id)a0 pendingNotificationRepository:(id)a1 notificationScheduleRepository:(id)a2 locationMonitor:(id)a3 bundleIdentifier:(id)a4 queue:(id)a5;
- (void)_setPendingNotificationRecords:(id)a0;
- (void)_invalidateNotificationRecordTimersAndRegionMonitors;
- (id)pendingNotificationRecords;
- (id)_sanitizeNotificationRecords:(id)a0;
- (void)_queue_triggerDidFireForDate:(id)a0;
- (void)removeAllPendingNotificationRecords;
- (void)locationMonitor:(id)a0 triggerDidFireForRegion:(id)a1 forBundleIdentifier:(id)a2;
- (void)addPendingNotificationRecords:(id)a0;
- (void)_invalidatePendingNotificationRecordTimers;
- (id)_dateFormatter;
- (void)_setRequestDateForPendingNotificationRecords:(id)a0;
- (id)_lastLocalNotificationFireDate;
- (void)dealloc;
- (void)removePendingNotificationRecordsWithIdentifiers:(id)a0;
- (void)_invalidatePendingNotificationRecordRegionMonitors;
- (void)_updateTimersAndRegionMonitorsForPendingNotificationRecords:(id)a0;
- (void)_setLastLocalNotificationFireDate:(id)a0;
- (void)_fireNotification:(id)a0;
- (void)_queue_triggerDidFireForTimer:(id)a0;
- (id)_pendingNotificationRecords;
- (void)handleApplicationStateRestore;
- (void)_setMonitoredRegions:(id)a0;
- (void)handleLocaleChange;
- (void)invalidate;
- (void)_queue_triggerDidFireForRegion:(id)a0;
- (void).cxx_destruct;
- (void)_updateRegionMonitorsForPendingNotificationRecords:(id)a0;
- (void)_updateTimersForPendingNotificationRecords:(id)a0;

@end
