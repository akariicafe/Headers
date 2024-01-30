@interface EKEventChange : EKCalendarItemChange

+ (int)entityType;
+ (void)fetchEventChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchEventChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchEventChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

@end
