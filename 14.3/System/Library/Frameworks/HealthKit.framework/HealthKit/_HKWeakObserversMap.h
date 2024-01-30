@class NSMutableDictionary;

@interface _HKWeakObserversMap : NSObject {
    NSMutableDictionary *_observers;
}

- (id)observersForKey:(id)a0;
- (unsigned long long)observerCountForKey:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0 forKey:(id)a1;
- (void)addObserver:(id)a0 forKey:(id)a1;

@end
