@interface EKCalendarIsAffectingAvailabilityEditItem : EKCalendarAbstractSwitchEditItem

- (BOOL)underlyingCalendarState;
- (BOOL)cellWrapsLongText;
- (id)descriptionLabelText;
- (BOOL)configureWithCalendar:(id)a0;
- (id)headerTitle;
- (id)cellText;
- (void)setUnderlyingCalendarState:(BOOL)a0;

@end
