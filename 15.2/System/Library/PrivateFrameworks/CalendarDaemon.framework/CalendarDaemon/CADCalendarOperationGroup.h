@interface CADCalendarOperationGroup : CADOperationGroup <CADCalendarInterface>

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventOrReminderAccess;

- (void)CADDatabaseGetCalendarsWithFaultedProperties:(id)a0 reply:(id /* block */)a1;
- (void)CADCalendar:(id)a0 hasReminders:(id /* block */)a1;
- (int)_tryPerformBlockWithCalendarID:(id)a0 forAction:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)CADCalendar:(id)a0 hasEvents:(id /* block */)a1;

@end
