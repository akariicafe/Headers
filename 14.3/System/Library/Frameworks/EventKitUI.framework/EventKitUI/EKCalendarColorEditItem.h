@class NSMutableArray;

@interface EKCalendarColorEditItem : EKCalendarEditItem {
    unsigned long long _checkedRow;
}

@property (readonly, nonatomic) NSMutableArray *cells;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)setCalendar:(id)a0 store:(id)a1;
- (id)_cellWithText:(id)a0;
- (id)_cellForSymbolicColor:(id)a0;
- (id)_cellForColor:(id)a0;
- (BOOL)configureWithCalendar:(id)a0;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (unsigned long long)numberOfSubitems;
- (id)headerTitle;
- (BOOL)saveStateToCalendar:(id)a0;

@end
