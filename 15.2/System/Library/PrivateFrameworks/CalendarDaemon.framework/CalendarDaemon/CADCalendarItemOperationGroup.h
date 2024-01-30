@interface CADCalendarItemOperationGroup : CADOperationGroup <CADCalendarItemInterface>

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventOrReminderAccess;

- (void)CADDatabaseFetchEntitiesOfType:(int)a0 withContactIdentifier:(id)a1 withReply:(id /* block */)a2;
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)a0 inCalendar:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)a0;
- (void)CADDatabaseiTIPImport:(id)a0 intoCalendarID:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseAddContactWithIdentifier:(id)a0 forCalendarItem:(id)a1 withReply:(id /* block */)a2;
- (void)CADDatabaseExportCalendarItemAsICS:(id)a0 withOptions:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)CADDatabaseGetCalendarItemWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseCountEntitiesOfType:(int)a0 withContactIdentifier:(id)a1 withReply:(id /* block */)a2;
- (void)CADDatabaseGetAlarmWithExternalID:(id)a0 reply:(id /* block */)a1;
- (id)_resultsFilteredForJunkEvents:(id)a0;
- (void)CADDatabaseRemoveContactIdentifier:(id)a0 forCalendarItem:(id)a1 withReply:(id /* block */)a2;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(id)a0 entityType:(int)a1 fetchIdentifier:(int)a2 reply:(id /* block */)a3;
- (void)CADDatabaseGetContactIdentifierForCalendarItem:(id)a0 reply:(id /* block */)a1;
- (id)_resultsFilteredForTCCAccess:(id)a0;

@end
