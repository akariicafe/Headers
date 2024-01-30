@class NSString, _PASSimpleCoalescingTimer, NSHashTable;
@protocol ATXModeFeaturizerDelegate;

@interface ATXModeCalendarFeaturizer : NSObject <ATXModeFeaturizer> {
    NSHashTable *_timers;
    _PASSimpleCoalescingTimer *_featureUpdateTimer;
}

@property (nonatomic) BOOL calendarRefreshCoalesceTimerIsEnabled;
@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLikelyAWorkCalendar:(id)a0;

- (void)stopListening;
- (BOOL)_hasAnyEventsIn:(id)a0 now:(id)a1;
- (id)provideFeatures;
- (void)_updateFeatures;
- (void)_eventsDidChange:(id)a0;
- (void)beginListening;
- (void)_setFeaturesForEventsCurrentlyIn:(id)a0 now:(id)a1 featureSet:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_addTimerForDate:(id)a0;
- (BOOL)_shouldConsiderEventBasedOnParticipantStatus:(long long)a0;
- (id)_fetchEventsForDay;

@end
