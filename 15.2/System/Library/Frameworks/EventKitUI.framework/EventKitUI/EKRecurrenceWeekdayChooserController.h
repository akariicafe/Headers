@class NSArray, NSMutableArray;

@interface EKRecurrenceWeekdayChooserController : EKRecurrenceChooserController {
    NSMutableArray *_selectedRows;
}

@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) NSArray *daysOfTheWeek;

- (long long)numberOfRows;
- (id)initWithDate:(id)a0;
- (void).cxx_destruct;
- (int)_dayMask;
- (long long)frequency;
- (void)updateRecurrenceRuleBuilder:(id)a0;
- (void)updateFromRecurrenceRule:(id)a0;
- (id)cellForRow:(long long)a0;
- (double)heightForRow:(long long)a0;
- (void)rowTapped:(long long)a0;
- (void)_setCell:(id)a0 selected:(BOOL)a1;

@end
