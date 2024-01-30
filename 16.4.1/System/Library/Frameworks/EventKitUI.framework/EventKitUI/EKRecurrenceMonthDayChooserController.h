@class NSMutableSet;

@interface EKRecurrenceMonthDayChooserController : EKRecurrenceGridChooserController {
    NSMutableSet *_daysOfTheMonthSet;
}

@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;

- (void)prepareForDisplay;
- (long long)frequency;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)daysOfTheMonth;
- (void)setDaysOfTheMonth:(id)a0;
- (id)cellLabels;
- (long long)gridViewType;
- (void)refreshCells;
- (void)selectCell:(id)a0 atIndex:(long long)a1;
- (void)updateFromRecurrenceRule:(id)a0;
- (void)updateRecurrenceRuleBuilder:(id)a0;

@end
