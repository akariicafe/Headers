@class NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SKUIToggleStateCenter : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_itemStates;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
}

+ (id)defaultCenter;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (BOOL)updateItem:(id)a0;
- (void)clearAll;
- (id)itemForIdentifier:(id)a0;
- (void)_notifyObserversOfStateChanges:(id)a0;
- (void)_accountStoreChangeNotification:(id)a0;

@end
