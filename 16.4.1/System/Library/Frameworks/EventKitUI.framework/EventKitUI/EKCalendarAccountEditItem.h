@class EKSource;

@interface EKCalendarAccountEditItem : EKCalendarEditItem {
    EKSource *_limitedToSource;
}

@property (nonatomic) BOOL editable;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)currentSource;
- (void).cxx_destruct;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)calendarEditor:(id)a0 shouldSelectSubitem:(unsigned long long)a1;
- (BOOL)canAddCalendarToMoreThanOneAccount;
- (id)initLimitedToSource:(id)a0;

@end
