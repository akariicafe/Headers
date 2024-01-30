@class UNSKeyedDataStoreRepository, UNSBundleLibrarian, NSObject, UNSKeyedObservable;
@protocol OS_dispatch_queue;

@interface UNSPendingNotificationRepository : NSObject {
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
    UNSBundleLibrarian *_librarian;
}

- (void)notificationSourcesDidUninstall:(id)a0;
- (id)_queue_pendingNotificationDictionariesForBundleIdentifier:(id)a0;
- (id)allBundleIdentifiers;
- (id)pendingNotificationRecordsForBundleIdentifier:(id)a0;
- (void)_queue_setPendingNotificationDictionaries:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_performMigration;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (void)applicationStateDidRestore;
- (void)_queue_notifyObserversOfChangesFrom:(id)a0 to:(id)a1 forBundleIdentifier:(id)a2;
- (void)setPendingNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)a0;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (id)initWithDataStoreRepository:(id)a0 observable:(id)a1 librarian:(id)a2;
- (void)_queue_setPendingNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (void)performMigration;
- (void)_queue_performMigrationForBundleIdentifier:(id)a0;
- (long long)_maxObjectsPerKey;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)initWithDirectory:(id)a0 librarian:(id)a1 repositoryProtectionStrategy:(id)a2;
- (void).cxx_destruct;

@end
