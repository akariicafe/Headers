@class NSMutableDictionary;

@interface _HKWeakObserversMap : NSObject {
    NSMutableDictionary *_observers;
}

- (void)addObserver:(id)a0 forKey:(id)a1;
- (void)removeObserver:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)observerCountForKey:(id)a0;
- (id)observersForKey:(id)a0;

@end
