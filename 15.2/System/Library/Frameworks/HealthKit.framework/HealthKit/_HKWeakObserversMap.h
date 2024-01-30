@class NSMutableDictionary;

@interface _HKWeakObserversMap : NSObject {
    NSMutableDictionary *_observers;
}

- (unsigned long long)observerCountForKey:(id)a0;
- (id)observersForKey:(id)a0;
- (void)addObserver:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0 forKey:(id)a1;

@end
