@class NSString, EKEventStore, _PASSimpleCoalescingTimer, NSHashTable, ATXMicrolocationLocalization;
@protocol ATXModeFeaturizerDelegate;

@interface ATXModeCalendarFeaturizer : NSObject <ATXModeFeaturizer> {
    NSHashTable *_timers;
    _PASSimpleCoalescingTimer *_featureUpdateTimer;
    ATXMicrolocationLocalization *_microlocationLocalization;
    EKEventStore *_eventStore;
}

@property (nonatomic) BOOL calendarRefreshCoalesceTimerIsEnabled;
@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLikelyAWorkCalendar:(id)a0;

- (void)beginListening;
- (BOOL)_shouldConsiderEventBasedOnParticipantStatus:(long long)a0;
- (id)provideFeatures;
- (void)stopListening;
- (BOOL)_shouldStayInWorkModeInBetweenMostRecentWorkEvent:(id)a0 andUpcomingWorkEvent:(id)a1;
- (void)_updateFeatures;
- (void)_addTimerForDate:(id)a0;
- (void)_setFeaturesForEventsCurrentlyIn:(id)a0 now:(id)a1 featureSet:(id)a2;
- (void)dealloc;
- (BOOL)_isDate:(id)a0 betweenStartDate:(id)a1 andEndDate:(id)a2;
- (id)initWithLocationManager:(id)a0;
- (BOOL)_shouldInitiateMicrolocationLocalizationWithMostRecentWorkEvent:(id)a0 upcomingWorkEvent:(id)a1 now:(id)a2;
- (id)_fetchEligibleEventsForDay;
- (void)_eventsDidChange:(id)a0;
- (void).cxx_destruct;

@end
