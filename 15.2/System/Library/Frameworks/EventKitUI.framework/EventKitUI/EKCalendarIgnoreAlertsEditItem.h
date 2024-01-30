@interface EKCalendarIgnoreAlertsEditItem : EKCalendarAbstractSwitchEditItem

- (id)headerTitle;
- (id)cellText;
- (BOOL)underlyingCalendarState;
- (BOOL)cellWrapsLongText;
- (id)descriptionLabelText;
- (void)setUnderlyingCalendarState:(BOOL)a0;

@end
