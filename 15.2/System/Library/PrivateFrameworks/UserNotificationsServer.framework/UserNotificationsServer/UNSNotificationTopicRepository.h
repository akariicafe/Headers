@class UNSKeyedObservable, NSObject, UNSKeyedDataStoreRepository;
@protocol OS_dispatch_queue;

@interface UNSNotificationTopicRepository : NSObject {
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)allBundleIdentifiers;
- (long long)_maxObjectsPerKey;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)_queue_topicsForBundleIdentifier:(id)a0;
- (id)topicsForBundleIdentifier:(id)a0;
- (id)initWithDirectory:(id)a0 librarian:(id)a1 repositoryProtectionStrategy:(id)a2;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (void).cxx_destruct;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void)_queue_setTopics:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setTopics:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithDataStoreRepository:(id)a0 observable:(id)a1;

@end
