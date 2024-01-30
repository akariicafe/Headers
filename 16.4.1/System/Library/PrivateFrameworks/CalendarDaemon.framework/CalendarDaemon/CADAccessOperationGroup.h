@interface CADAccessOperationGroup : CADOperationGroup <CADAccessInterface>

+ (BOOL)requiresEventAccess;

- (void)CADDatabaseGetAccess:(id /* block */)a0;
- (void)CADDatabaseResetWithReply:(id /* block */)a0;
- (void)CADDatabaseSetInitializationOptions:(id)a0 reply:(id /* block */)a1;

@end
