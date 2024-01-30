@class NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SKUIToggleStateCenter : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_itemStates;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
}

+ (id)defaultCenter;

- (void)addObserver:(id)a0;
- (id)itemForIdentifier:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (BOOL)updateItem:(id)a0;
- (id)init;
- (void)clearAll;
- (void).cxx_destruct;
- (void)_notifyObserversOfStateChanges:(id)a0;
- (void)_accountStoreChangeNotification:(id)a0;

@end
