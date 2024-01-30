@class EKSource;

@interface EKCalendarAccountEditItem : EKCalendarEditItem {
    EKSource *_limitedToSource;
}

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (id)currentSource;
- (BOOL)canAddCalendarToMoreThanOneAccount;
- (id)initLimitedToSource:(id)a0;
- (BOOL)calendarEditor:(id)a0 shouldSelectSubitem:(unsigned long long)a1;

@end
