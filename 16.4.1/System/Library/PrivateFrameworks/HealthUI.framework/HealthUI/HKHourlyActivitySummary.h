@class NSDateComponents;

@interface HKHourlyActivitySummary : HKActivitySummary

@property (retain, nonatomic) NSDateComponents *hourlyDateComponents;

- (BOOL)_useHourlyGoalComparison;
- (id)dateComponentsForCalendar:(id)a0;
- (void).cxx_destruct;

@end
