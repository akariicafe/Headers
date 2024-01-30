@class NSPointerArray;

@interface ARUIObserverStore : NSObject {
    NSPointerArray *_observers;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)enumerateObserversWithBlock:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
