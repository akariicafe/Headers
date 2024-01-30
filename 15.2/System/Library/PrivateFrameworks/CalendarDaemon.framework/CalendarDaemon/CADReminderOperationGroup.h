@interface CADReminderOperationGroup : CADOperationGroup <CADReminderInterface>

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventOrReminderAccess;

- (void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(id /* block */)a0;
- (void)CADDatabaseGetCountOfRemindersWithPredicate:(id)a0 reply:(id /* block */)a1;
- (void)CADScheduledTaskCacheGetDaysAndTaskCounts:(id /* block */)a0;
- (void)CADDatabaseGetProperties:(id)a0 forReminders:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseSetDefaultCalendarForNewReminders:(id)a0;

@end
