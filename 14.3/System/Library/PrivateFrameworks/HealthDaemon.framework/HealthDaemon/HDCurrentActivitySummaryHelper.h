@class NSDate, NSHashTable, NSArray, HDActivitySummaryQueryHelper, HDProfile, NSTimeZone, NSObject, HKActivitySummary;
@protocol OS_dispatch_queue;

@interface HDCurrentActivitySummaryHelper : NSObject {
    HDProfile *_profile;
    HDActivitySummaryQueryHelper *_queryHelper;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _todayIndex;
    long long _yesterdayIndex;
    HKActivitySummary *_todaySummary;
    HKActivitySummary *_yesterdaySummary;
    BOOL _hasLoadedActivitySummaries;
    NSArray *_typesForDataCollection;
    NSHashTable *_observers;
    NSDate *_dateOverride;
    NSTimeZone *_timezoneOverride;
}

@property (retain, nonatomic) NSDate *dateOverride;
@property (retain, nonatomic) NSTimeZone *timezoneOverride;
@property (readonly) HKActivitySummary *todayActivitySummary;
@property (readonly) HKActivitySummary *yesterdayActivitySummary;
@property (readonly) BOOL hasLoadedActivitySummaries;

- (id)initWithProfile:(id)a0;
- (void)_queue_alertObserversTodaySummaryUpdated:(id)a0 changedFields:(unsigned long long)a1;
- (void)_queue_updateYesterdayActivitySummary:(id)a0;
- (BOOL)_queue_dateHasChanged;
- (void)_handleSignificantTimeChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)_queue_updateTodayActivitySummary:(id)a0;
- (void)dealloc;
- (void)_registerForSignificantTimeChangeNotification;
- (void)addObserver:(id)a0;
- (void)_queue_updateActivitySummaries:(id)a0;
- (unsigned long long)_changedFieldsBetweenPreviousActivitySummary:(id)a0 andNewActivitySummary:(id)a1;
- (void)_queue_alertObserversYesterdaySummaryUpdated:(id)a0 changedFields:(unsigned long long)a1;
- (id)_createEmptyActivitySummaryForIndex:(long long)a0;
- (void)_queue_setUpActivityQueryHelper;
- (id)_queue_gregorianCalendar;
- (void)_generateCacheIndexesWithTodayIndex:(long long *)a0 yesterdayIndex:(long long *)a1;
- (void)_queue_resetQueryHelper;

@end
