@interface CADCalendarItemOperationGroup : CADOperationGroup <CADCalendarItemInterface>

+ (BOOL)requiresEventAccess;

- (void)CADDatabaseGetCalendarItemWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetAlarmWithExternalID:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)a0 inCalendar:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseiTIPImport:(id)a0 intoCalendarID:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(id)a0 entityType:(int)a1 fetchIdentifier:(int)a2 synchronous:(BOOL)a3 reply:(id /* block */)a4;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)a0;
- (void)CADDatabaseExportICSForCalendarItemWithID:(id)a0 occurrenceDate:(id)a1 options:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)CADDatabaseGetCalendarItemsWithUUIDs:(id)a0 inCalendars:(id)a1 propertiesToLoad:(id)a2 reply:(id /* block */)a3;

@end
