@class UITableViewCell;

@interface EKEventFacebookButtonDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
}

- (void)eventViewController:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)layoutCellsForWidth:(double)a0 position:(int)a1;
- (void).cxx_destruct;
- (void)reset;

@end
