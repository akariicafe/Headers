@class UITableViewCell;

@interface EKEventAvailabilityDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    long long _availability;
}

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (BOOL)_canChangeAvailability;
- (id)_choices;
- (void).cxx_destruct;
- (void)setEvent:(id)a0 store:(id)a1;
- (void)reset;

@end
