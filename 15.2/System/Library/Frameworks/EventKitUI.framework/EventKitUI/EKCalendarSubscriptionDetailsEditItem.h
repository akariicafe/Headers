@interface EKCalendarSubscriptionDetailsEditItem : EKCalendarEditItem

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfSubitems;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0;

@end
