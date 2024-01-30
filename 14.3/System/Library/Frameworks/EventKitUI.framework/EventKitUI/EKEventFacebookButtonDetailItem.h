@class UITableViewCell;

@interface EKEventFacebookButtonDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
}

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutCellsForWidth:(double)a0 position:(int)a1;
- (void)eventViewController:(id)a0 didSelectSubitem:(unsigned long long)a1;

@end
