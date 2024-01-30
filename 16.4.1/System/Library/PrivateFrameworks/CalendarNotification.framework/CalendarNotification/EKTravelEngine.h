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

+ (id)travelEligibleEventsInEventStore:(id)a0;
+ (double)_periodicRefreshInterval;
+ (double)_travelAgendaTimeWindowInterval;
+ (id)requestedDarwinNotifications;
+ (double)requestRefreshTimeInterval;
+ (id)travelEligibleEvents:(id)a0 fromStartDate:(id)a1 untilEndDate:(id)a2;

- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)receivedAlarmNamed:(id)a0;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)_significantTimeChangeNotificationReceived;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (void)_unregisterAllAgendaEntries;
- (void)_installPeriodicRefreshTimer;
- (void)handleDarwinNotification:(id)a0;
- (void)_suggestEventLocationsSettingChanged;
- (void)_uninstallLocationManager;
- (void)_stopInternal;
- (BOOL)_authorizedToAcquireLocation;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)_uninstallPeriodicRefreshTimer;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
- (void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)a0 feedback:(id /* block */)a1;
- (void)_calDatabaseChangedNotificationReceived;
- (void)dealloc;
- (id)alarmName;
- (void)_installLocationManager;
- (void)_uninstallSyncYieldTimer;
- (void)_eventKitFeatureSetChanged;
- (void)_periodicRefreshTimerFired;
- (BOOL)isLocationManagerStatusAuthorized:(int)a0;
- (void)stop;
- (void)_refreshIfNeeded;
- (BOOL)_isProtectedDataAvailable;
- (void)_trimAgendaEntriesBeforeDate:(id)a0 andAfterDate:(id)a1;
- (void)start;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (id)_eventStore;
- (void).cxx_destruct;
- (void)_installSyncYieldTimer;
- (void)_updateDatabaseEncryptionState;

@end
