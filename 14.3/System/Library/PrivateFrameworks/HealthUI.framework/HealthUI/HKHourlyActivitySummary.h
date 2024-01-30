@class NSDateComponents;

@interface HKHourlyActivitySummary : HKActivitySummary

@property (retain, nonatomic) NSDateComponents *hourlyDateComponents;

- (void).cxx_destruct;
- (id)dateComponentsForCalendar:(id)a0;
- (BOOL)_useHourlyGoalComparison;

@end
