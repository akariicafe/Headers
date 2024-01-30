@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (BOOL)isUserInterfaceContext;
- (void)setupLocalChangeNotifications;
- (void)tearDownLocalChangeNotifications;
- (void).cxx_destruct;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;
- (BOOL)_hasChangesForCloudShared:(id)a0;
- (BOOL)shouldMergeFromRemoteContextWithChanges:(id)a0;

@end
