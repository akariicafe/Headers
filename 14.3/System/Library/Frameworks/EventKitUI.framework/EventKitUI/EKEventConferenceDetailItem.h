@class NSString, UITableViewCell;

@interface EKEventConferenceDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    NSString *_appName;
}

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)_tap;
- (void)setEvent:(id)a0 store:(id)a1;

@end
