@interface CADMigrationOperationGroup : CADOperationGroup <CADMigrationInterface>

+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventOrReminderAccess;

- (void)CADMigrateDatabaseIfNeeded:(id /* block */)a0;

@end
