@interface CADCalendarOperationGroup : CADOperationGroup <CADCalendarInterface>

+ (BOOL)requiresEventAccess;

- (void)CADCalendar:(id)a0 hasEvents:(id /* block */)a1;
- (void)CADDatabaseGetCalendarsWithFaultedProperties:(id)a0 reply:(id /* block */)a1;
- (int)_tryPerformBlockWithCalendarID:(id)a0 forAction:(unsigned long long)a1 withBlock:(id /* block */)a2;

@end
