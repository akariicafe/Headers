@interface EKCalendarIgnoreSharedCalendarResourceChangeNotificationsEditItem : EKCalendarAbstractSwitchEditItem

- (id)headerTitle;
- (id)cellText;
- (BOOL)configureWithCalendar:(id)a0;
- (id)descriptionLabelText;
- (void)setUnderlyingCalendarState:(BOOL)a0;
- (BOOL)underlyingCalendarState;

@end
