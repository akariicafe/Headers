@interface EKReminderChange : EKCalendarItemChange

+ (int)entityType;
+ (void)fetchReminderChangesInStore:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchReminderChangesInSource:(id)a0 resultHandler:(id /* block */)a1;
+ (void)fetchReminderChangesInCalendar:(id)a0 resultHandler:(id /* block */)a1;

@end
