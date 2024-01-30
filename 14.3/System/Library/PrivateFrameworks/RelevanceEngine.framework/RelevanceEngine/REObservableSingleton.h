@class REObserverStore;

@interface REObservableSingleton : RESingleton {
    REObserverStore *_store;
}

@property (readonly, nonatomic) unsigned long long numberOfObservers;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)enumerateObservers:(id /* block */)a0;
- (id)_init;

@end
