@interface EKCalendarIgnoreSharedCalendarResourceChangeNotificationsEditItem : EKCalendarAbstractSwitchEditItem

- (id)headerTitle;
- (id)cellText;
- (BOOL)configureWithCalendar:(id)a0;
- (BOOL)underlyingCalendarState;
- (id)descriptionLabelText;
- (void)setUnderlyingCalendarState:(BOOL)a0;

@end
