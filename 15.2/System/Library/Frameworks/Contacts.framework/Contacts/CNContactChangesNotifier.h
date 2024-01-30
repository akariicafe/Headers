@class CNContactStore, CNMutableMultiDictionary;
@protocol CNScheduler;

@interface CNContactChangesNotifier : NSObject {
    BOOL _observingNotification;
    id<CNScheduler> _resourceLock;
    id<CNScheduler> _workQueue;
    id<CNScheduler> _downstream;
    CNContactStore *_contactStore;
    CNMutableMultiDictionary *_registeredObservers;
}

+ (id)workQueue_createFetchersFromRegisteredObservers:(id)a0;
+ (id)sharedNotifier;

- (void)registerObserver:(id)a0 forContact:(id)a1;
- (void)unregisterObserver:(id)a0 forContact:(id)a1;
- (void)unregisterObserver:(id)a0 forContact:(id)a1 completionHandler:(id /* block */)a2;
- (void)registerObserver:(id)a0 forContact:(id)a1 keysToFetch:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithContactStore:(id)a0 downstreamScheduler:(id)a1 schedulerProvider:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)registerObserver:(id)a0 forContact:(id)a1 keysToFetch:(id)a2;
- (void)contactStoreDidChange:(id)a0;

@end
