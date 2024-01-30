@class UNSKeyedObservable, NSObject, UNSKeyedDataStoreRepository;
@protocol OS_dispatch_queue;

@interface UNSNotificationCategoryRepository : NSObject {
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)notificationSourcesDidUninstall:(id)a0;
- (void)_queue_setCategories:(id)a0 forBundleIdentifier:(id)a1;
- (id)allBundleIdentifiers;
- (id)categoriesForBundleIdentifier:(id)a0;
- (void)_queue_performMigration;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (id)_queue_categoriesForBundleIdentifier:(id)a0;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (id)categoryWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void)performMigration;
- (void)setCategories:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_performMigrationForBundleIdentifier:(id)a0;
- (long long)_maxObjectsPerKey;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)initWithDirectory:(id)a0 librarian:(id)a1 repositoryProtectionStrategy:(id)a2;
- (void).cxx_destruct;
- (id)initWithDataStoreRepository:(id)a0 observable:(id)a1;

@end
