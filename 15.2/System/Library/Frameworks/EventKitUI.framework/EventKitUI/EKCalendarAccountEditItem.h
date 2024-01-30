@class EKSource;

@interface EKCalendarAccountEditItem : EKCalendarEditItem {
    EKSource *_limitedToSource;
}

@property (nonatomic) BOOL editable;

- (id)currentSource;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)calendarEditor:(id)a0 shouldSelectSubitem:(unsigned long long)a1;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)canAddCalendarToMoreThanOneAccount;
- (id)initLimitedToSource:(id)a0;

@end
