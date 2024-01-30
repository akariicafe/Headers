@interface CADReminderOperationGroup : CADOperationGroup <CADReminderInterface>

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;

- (void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(id /* block */)a0;
- (void)CADDatabaseGetProperties:(id)a0 forReminders:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseGetCountOfRemindersWithPredicate:(id)a0 reply:(id /* block */)a1;
- (void)CADScheduledTaskCacheGetDaysAndTaskCounts:(id /* block */)a0;
- (void)CADDatabaseSetDefaultCalendarForNewReminders:(id)a0;

@end
