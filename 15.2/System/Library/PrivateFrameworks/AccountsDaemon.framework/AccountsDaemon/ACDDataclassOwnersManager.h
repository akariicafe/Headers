@class NSLock, NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject {
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
}

- (id)_dataclassOwnersManagerConnection;
- (void)preloadDataclassOwnersWithError:(id *)a0;
- (id)actionsForDeletingAccount:(id)a0 affectingDataclass:(id)a1 withError:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)actionsForAddingAccount:(id)a0 affectingDataclass:(id)a1 withError:(id *)a2;
- (BOOL)isPerformingDataclassActionsForAccount:(id)a0;
- (BOOL)performDataclassActions:(id)a0 forAccount:(id)a1 withChildren:(id)a2 withError:(id *)a3;
- (id)actionsForDisablingDataclass:(id)a0 onAccount:(id)a1 withError:(id *)a2;
- (id)actionsForEnablingDataclass:(id)a0 onAccount:(id)a1 withError:(id *)a2;

@end
