@interface CADAccessOperationGroup : CADOperationGroup <CADAccessInterface>

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;

- (void)CADDatabaseGetAccess:(id /* block */)a0;
- (void)CADDatabaseResetWithReply:(id /* block */)a0;
- (void)CADDatabaseSetInitializationOptions:(id)a0 reply:(id /* block */)a1;

@end
