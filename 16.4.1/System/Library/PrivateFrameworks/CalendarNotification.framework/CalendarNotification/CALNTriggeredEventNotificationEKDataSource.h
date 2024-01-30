@class CALNTriggeredEventNotificationMailtoURLProvider, CALNCalendarCoreLocationManager, NSString;
@protocol CALNDataSourceEventRepresentationProvider, CALNTravelEngine, CALNTTLEventTracker, CALNSuggestionsServiceLogger, CALNRouteHypothesizerProvider, CALNRemoteMutator, CALNTimeToLeaveRefreshMonitor, CALNAlarmEngineMonitor, CALNDebugPreferences, CALNTriggeredEventNotificationDataSourceDelegate, CALNFoundInAppsEventTracker, EKEventStoreProvider;

@interface CALNTriggeredEventNotificationEKDataSource : NSObject <CALNTravelEngineDelegate, CALNTimeToLeaveRefreshMonitorDelegate, CALNTriggeredEventNotificationDataSource>

@property (readonly, nonatomic) id<EKEventStoreProvider> eventStoreProvider;
@property (readonly, nonatomic) id<CALNRemoteMutator> remoteMutator;
@property (readonly, nonatomic) id<CALNDataSourceEventRepresentationProvider> dataSourceEventRepresentationProvider;
@property (readonly, nonatomic) CALNCalendarCoreLocationManager *coreLocationManager;
@property (readonly, nonatomic) id<CALNTTLEventTracker> ttlEventTracker;
@property (readonly, nonatomic) id<CALNAlarmEngineMonitor> alarmEngineMonitor;
@property (readonly, nonatomic) id<CALNTravelEngine> travelEngine;
@property (readonly, nonatomic) id<CALNFoundInAppsEventTracker> foundInAppsEventTracker;
@property (readonly, nonatomic) id<CALNSuggestionsServiceLogger> suggestionsServiceLogger;
@property (readonly, nonatomic) id<CALNRouteHypothesizerProvider> routeHypothesizerProvider;
@property (readonly, nonatomic) id<CALNTimeToLeaveRefreshMonitor> timeToLeaveRefreshMonitor;
@property (readonly, nonatomic) id<CALNDebugPreferences> debugPreferences;
@property (readonly, nonatomic) CALNTriggeredEventNotificationMailtoURLProvider *mailtoURLProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CALNTriggeredEventNotificationDataSourceDelegate> delegate;

+ (id)_alarmDateForAlarm:(id)a0 eventStartDate:(id)a1;
+ (id)_alarmForEvent:(id)a0 withAlarmID:(id)a1;
+ (id)_sourceClientIdentifierForAlertInfo:(id)a0;
+ (double)snoozeInterval;

- (BOOL)_shouldWithdrawNotificationWithSourceClientIdentifier:(id)a0 event:(id)a1 alarmID:(id)a2;
- (void)removeTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)a0;
- (void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)a0 eventID:(id)a1;
- (void)_didSetUpTimeToLeaveRefreshTimerForEventID:(id)a0 triggerDate:(id)a1;
- (void)travelEngine:(id)a0 receivedHypothesis:(id)a1 eventExternalURL:(id)a2;
- (id)_notificationExpirationDateForNullableAlarmDate:(id)a0 eventEndDate:(id)a1;
- (void)removeTimeToLeaveRefreshTimerForEventID:(id)a0;
- (void)sendFeedbackForAddedTravelAdvisoryNotificationWithSourceClientIdentifier:(id)a0 hypothesis:(id)a1 travelAdvisoryTimelinessPeriod:(unsigned long long)a2;
- (void)didDismissUINotification:(unsigned long long)a0 forPlannedDestination:(id)a1 dismissalType:(unsigned long long)a2;
- (id)fetchTriggeredEventNotificationInfoWithSourceClientIdentifier:(id)a0 isProtectedDataAvailable:(BOOL)a1;
- (void)timeToLeaveRefreshMonitor:(id)a0 refreshTimerFiredForEventExternalURL:(id)a1;
- (BOOL)_shouldTriggerForAlertInfo:(id)a0;
- (id)_filterAlerts:(id)a0;
- (BOOL)shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)a0 eventID:(id)a1;
- (id)notificationExpirationDateForEventID:(id)a0 alarmID:(id)a1;
- (void)snoozeEventWithSourceClientIdentifier:(id)a0 snoozeType:(unsigned long long)a1;
- (double)_requestHypothesisRefreshInterval;
- (void)acknowledgeEventWithSourceClientIdentifier:(id)a0 shouldMarkAsHavingReceivedLocation:(BOOL)a1;
- (id)_notificationExpirationDateForAlarmDate:(id)a0 eventEndDate:(id)a1;
- (BOOL)shouldWithdrawNotificationWithSourceClientIdentifier:(id)a0;
- (void)sendFeedbackForAddedLeaveNowNotificationWithSourceClientIdentifier:(id)a0;
- (id)_eventForSourceClientIdentifier:(id)a0;
- (void)handleMailOrganizerActionWithSourceClientIdentifier:(id)a0 hypothesis:(id)a1;
- (BOOL)shouldRemoveNotificationMetaDataWithEventID:(id)a0;
- (id)initWithEventStoreProvider:(id)a0 remoteMutator:(id)a1 dataSourceEventRepresentationProvider:(id)a2 coreLocationProvider:(id)a3 ttlEventTracker:(id)a4 alarmEngineMonitor:(id)a5 travelEngine:(id)a6 foundInAppsEventTracker:(id)a7 suggestionsServiceLogger:(id)a8 routeHypothesizerProvider:(id)a9 timeToLeaveRefreshMonitor:(id)a10 debugPreferences:(id)a11 mailtoURLProvider:(id)a12;
- (void)handleConferenceCallActionWithSourceClientIdentifier:(id)a0;
- (void)handleDirectionsActionWithSourceClientIdentifier:(id)a0 hypothesis:(id)a1 lastFireTimeOfAlertOffsetFromTravelTime:(id)a2;
- (void)_alertsFired:(id)a0;
- (void)travelEngine:(id)a0 eventSignificantlyChangedWithEventExternalURL:(id)a1;
- (void)ceaseRouteMonitoringEventWithEventID:(id)a0;
- (void)travelEngine:(id)a0 authorizationChanged:(BOOL)a1;
- (void)_alertFiredForAlertInfo:(id)a0;
- (id)_eventForEventID:(id)a0;
- (void)_handleNotificationActionForSourceClientIdentifier:(id)a0 acknowledgeAlarm:(BOOL)a1 eventActions:(id /* block */)a2;
- (void)setUpTimeToLeaveRefreshTimerWithTriggerDate:(id)a0 sourceClientIdentifier:(id)a1;
- (void)ceaseRouteMonitoringEventForSourceClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)eventObjectIDForEventID:(id)a0;

@end
