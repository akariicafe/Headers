@class NSArray, NSMutableSet;

@interface EKRecurrenceMonthChooserController : EKRecurrenceGridChooserController {
    NSMutableSet *_monthsOfTheYearSet;
}

@property (retain, nonatomic) NSArray *monthsOfTheYear;
@property (nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;

- (void)prepareForDisplay;
- (id)initWithDate:(id)a0;
- (void).cxx_destruct;
- (long long)frequency;
- (id)tableViewCell;
- (void)refreshCells;
- (void)updateRecurrenceRuleBuilder:(id)a0;
- (void)updateFromRecurrenceRule:(id)a0;
- (id)cellLabels;
- (long long)gridViewType;
- (void)selectCell:(id)a0 atIndex:(long long)a1;

@end
