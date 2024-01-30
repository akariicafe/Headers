@class NSHashTable;

@interface TSUObserverNotifier : NSObject {
    NSHashTable *_observers;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)notifyObserversUsingBlock:(id /* block */)a0;

@end
