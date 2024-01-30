@class NSString, NSMutableDictionary, CLLocationManager, EKTimedEventStorePurger, NSObject, NSDate;
@protocol CALNRouteHypothesizerProvider, OS_dispatch_queue, OS_dispatch_source;

@interface EKTravelEngine : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_syncYieldTimer;
    BOOL _running;
    BOOL _needsRefresh;
    BOOL _databaseIsEncryptedAndUnreadable;
    BOOL _yieldingToSync;
    NSMutableDictionary *_eventExternalURLsToAgendaEntries;
    CLLocationManager *_locationManager;
    EKTimedEventStorePurger *_timedEventStorePurger;
    NSDate *_lastRefreshDate;
}

@property (readonly, nonatomic) id<CALNRouteHypothesizerProvider> routeHypothesizerProvider;
@property (nonatomic) BOOL authorizedInternal;
@property (copy, nonatomic) id /* block */ adviceBlock;
@property (readonly, nonatomic) BOOL authorized;
@property (copy, nonatomic) id /* block */ authorizationChangedBlock;
@property (copy, nonatomic) id /* block */ eventSignificantlyChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)requestRefreshTimeInterval;
+ (double)_periodicRefreshInterval;
+ (double)_travelAgendaTimeWindowInterval;
+ (id)travelEligibleEvents:(id)a0 fromStartDate:(id)a1 untilEndDate:(id)a2;
+ (id)requestedDarwinNotifications;
+ (id)travelEligibleEventsInEventStore:(id)a0;

- (id)alarmName;
- (void)receivedAlarmNamed:(id)a0;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)a0 feedback:(id /* block */)a1;
- (void)_installPeriodicRefreshTimer;
- (void).cxx_destruct;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (void)dealloc;
- (void)_uninstallSyncYieldTimer;
- (void)stop;
- (id)_eventStore;
- (void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
- (void)_uninstallLocationManager;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)_unregisterAllAgendaEntries;
- (void)_suggestEventLocationsSettingChanged;
- (void)_uninstallPeriodicRefreshTimer;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)_refreshIfNeeded;
- (void)_eventKitFeatureSetChanged;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;
- (void)_calDatabaseChangedNotificationReceived;
- (void)start;
- (BOOL)isLocationManagerStatusAuthorized:(int)a0;
- (void)handleDarwinNotification:(id)a0;
- (void)_periodicRefreshTimerFired;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (BOOL)_authorizedToAcquireLocation;
- (void)_updateDatabaseEncryptionState;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)_installSyncYieldTimer;
- (void)_installLocationManager;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (BOOL)_isProtectedDataAvailable;
- (void)_stopInternal;
- (void)_significantTimeChangeNotificationReceived;
- (void)_trimAgendaEntriesBeforeDate:(id)a0 andAfterDate:(id)a1;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;

@end
