@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (void)performBlockAndWait:(id /* block */)a0;
- (void)tearDownLocalChangeNotifications;
- (void)performBlock:(id /* block */)a0;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;
- (void)setupLocalChangeNotifications;
- (BOOL)isUserInterfaceContext;
- (BOOL)shouldMergeFromRemoteContextWithChanges:(id)a0;
- (BOOL)_hasChangesForCloudShared:(id)a0;
- (void).cxx_destruct;

@end
