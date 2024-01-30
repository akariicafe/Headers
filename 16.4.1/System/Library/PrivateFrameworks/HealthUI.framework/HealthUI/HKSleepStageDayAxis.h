@protocol HKSleepStageDayAxisDelegate;

@interface HKSleepStageDayAxis : HKDateAxis

@property (weak, nonatomic) id<HKSleepStageDayAxisDelegate> delegate;

- (void).cxx_destruct;
- (id)_currentOrGregorianCalendar;
- (id)stringForDate:(id)a0 somnogramDateInterval:(id)a1;
- (id)stringForDate:(id)a0 zoom:(long long)a1 labelType:(long long)a2;

@end
