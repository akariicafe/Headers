@interface CADSyncOperationGroup : CADOperationGroup <CADSyncInterface>

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;

- (BOOL)accessGrantedToPerformSelector:(SEL)a0;
- (void)CADDatabaseGetDeletableCalendars:(id /* block */)a0;
- (void)CADDatabaseGetDeletableSources:(id /* block */)a0;

@end
