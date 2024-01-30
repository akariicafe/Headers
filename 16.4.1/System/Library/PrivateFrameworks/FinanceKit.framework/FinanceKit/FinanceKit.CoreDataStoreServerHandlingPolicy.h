@interface FinanceKit.CoreDataStoreServerHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy

- (BOOL)shouldAcceptConnectionsFromClientWithContext:(id)a0;
- (id)init;
- (id)allowableClassesForClientWithContext:(id)a0;

@end
