@interface CADMigrationOperationGroup : CADOperationGroup <CADMigrationInterface>

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;

- (BOOL)accessGrantedToPerformSelector:(SEL)a0;
- (void)CADMigrateDatabaseIfNeeded:(id /* block */)a0;

@end
