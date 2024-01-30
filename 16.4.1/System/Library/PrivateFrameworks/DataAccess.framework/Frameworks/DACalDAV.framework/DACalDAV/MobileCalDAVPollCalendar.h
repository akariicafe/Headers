@interface MobileCalDAVPollCalendar : MobileCalDAVCalendar

- (BOOL)isPoll;
- (id)initWithCalendarURL:(id)a0 principal:(id)a1 title:(id)a2;
- (BOOL)shouldCalendarBeHidden;

@end
