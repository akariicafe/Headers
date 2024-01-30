@class UNSKeyedObservable, NSObject, UNSKeyedDataStoreRepository;
@protocol OS_dispatch_queue;

@interface UNSNotificationTopicRepository : NSObject {
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void).cxx_destruct;
- (id)allBundleIdentifiers;
- (id)initWithDataStoreRepository:(id)a0 observable:(id)a1;
- (long long)_maxObjectsPerKey;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (void)setTopics:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithDirectory:(id)a0 librarian:(id)a1 repositoryProtectionStrategy:(id)a2;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (id)topicsForBundleIdentifier:(id)a0;
- (id)_queue_topicsForBundleIdentifier:(id)a0;
- (void)_queue_setTopics:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
