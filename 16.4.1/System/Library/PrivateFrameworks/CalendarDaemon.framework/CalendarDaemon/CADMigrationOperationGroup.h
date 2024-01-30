@interface CADMigrationOperationGroup : CADOperationGroup <CADMigrationInterface>

+ (BOOL)requiresEventAccess;

- (void)CADMigrateDatabaseIfNeeded:(id /* block */)a0;

@end
