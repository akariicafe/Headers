@interface CADSyncOperationGroup : CADOperationGroup <CADSyncInterface>

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventOrReminderAccess;

- (void)CADDatabaseGetDeletableSources:(id /* block */)a0;
- (void)CADDatabaseGetDeletableCalendars:(id /* block */)a0;
- (BOOL)accessGrantedToPerformSelector:(SEL)a0;

@end
