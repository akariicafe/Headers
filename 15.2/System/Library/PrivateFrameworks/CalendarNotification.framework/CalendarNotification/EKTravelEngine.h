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

+ (id)travelEligibleEvents:(id)a0 fromStartDate:(id)a1 untilEndDate:(id)a2;
+ (id)requestedDarwinNotifications;
+ (double)_periodicRefreshInterval;
+ (double)_travelAgendaTimeWindowInterval;
+ (id)travelEligibleEventsInEventStore:(id)a0;
+ (double)requestRefreshTimeInterval;

- (void)receivedAlarmNamed:(id)a0;
- (void)handleDarwinNotification:(id)a0;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (void)_refreshIfNeeded;
- (void)_installPeriodicRefreshTimer;
- (void)_uninstallPeriodicRefreshTimer;
- (void)_significantTimeChangeNotificationReceived;
- (void)_uninstallSyncYieldTimer;
- (void)_calDatabaseChangedNotificationReceived;
- (void)_periodicRefreshTimerFired;
- (void)start;
- (id)_eventStore;
- (void)_installSyncYieldTimer;
- (void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)a0 feedback:(id /* block */)a1;
- (void)_suggestEventLocationsSettingChanged;
- (void)_uninstallLocationManager;
- (void).cxx_destruct;
- (void)_unregisterAllAgendaEntries;
- (BOOL)_authorizedToAcquireLocation;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (id)alarmName;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)_eventKitFeatureSetChanged;
- (void)dealloc;
- (void)_trimAgendaEntriesBeforeDate:(id)a0 andAfterDate:(id)a1;
- (BOOL)_isProtectedDataAvailable;
- (void)_stopInternal;
- (void)_installLocationManager;
- (BOOL)isLocationManagerStatusAuthorized:(int)a0;
- (void)stop;
- (void)_updateDatabaseEncryptionState;

@end
