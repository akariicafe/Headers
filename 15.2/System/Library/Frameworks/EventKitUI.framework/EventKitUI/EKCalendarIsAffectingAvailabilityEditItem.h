@interface EKCalendarIsAffectingAvailabilityEditItem : EKCalendarAbstractSwitchEditItem

- (id)headerTitle;
- (id)cellText;
- (BOOL)configureWithCalendar:(id)a0;
- (BOOL)underlyingCalendarState;
- (BOOL)cellWrapsLongText;
- (id)descriptionLabelText;
- (void)setUnderlyingCalendarState:(BOOL)a0;

@end
