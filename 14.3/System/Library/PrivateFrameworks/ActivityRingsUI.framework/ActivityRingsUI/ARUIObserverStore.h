@class NSPointerArray;

@interface ARUIObserverStore : NSObject {
    NSPointerArray *_observers;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)enumerateObserversWithBlock:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;

@end
