@class UNSKeyedObservable, NSObject, UNSKeyedDataStoreRepository;
@protocol OS_dispatch_queue;

@interface UNSNotificationCategoryRepository : NSObject {
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)allBundleIdentifiers;
- (void)_queue_setCategories:(id)a0 forBundleIdentifier:(id)a1;
- (long long)_maxObjectsPerKey;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)performMigration;
- (id)initWithDirectory:(id)a0 librarian:(id)a1 repositoryProtectionStrategy:(id)a2;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (id)categoryWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (void).cxx_destruct;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void)_queue_performMigration;
- (id)initWithDataStoreRepository:(id)a0 observable:(id)a1;
- (id)categoriesForBundleIdentifier:(id)a0;
- (void)setCategories:(id)a0 forBundleIdentifier:(id)a1;
- (id)_queue_categoriesForBundleIdentifier:(id)a0;
- (void)_queue_performMigrationForBundleIdentifier:(id)a0;

@end
