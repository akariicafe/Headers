@interface CADSyncOperationGroup : CADOperationGroup <CADSyncInterface>

+ (BOOL)requiresEventAccess;

- (void)CADDatabaseGetDeletableCalendars:(id /* block */)a0;
- (void)CADDatabaseGetDeletableSources:(id /* block */)a0;
- (BOOL)accessGranted;

@end
