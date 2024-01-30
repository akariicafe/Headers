@class NSMutableSet;

@interface EKRecurrenceMonthDayChooserController : EKRecurrenceGridChooserController {
    NSMutableSet *_daysOfTheMonthSet;
}

@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;

- (void)prepareForDisplay;
- (void)setDaysOfTheMonth:(id)a0;
- (id)initWithDate:(id)a0;
- (void).cxx_destruct;
- (long long)frequency;
- (id)daysOfTheMonth;
- (void)refreshCells;
- (void)updateRecurrenceRuleBuilder:(id)a0;
- (void)updateFromRecurrenceRule:(id)a0;
- (id)cellLabels;
- (long long)gridViewType;
- (void)selectCell:(id)a0 atIndex:(long long)a1;

@end
