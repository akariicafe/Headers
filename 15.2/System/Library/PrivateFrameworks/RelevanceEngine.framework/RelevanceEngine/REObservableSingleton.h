@class REObserverStore;

@interface REObservableSingleton : RESingleton {
    REObserverStore *_store;
}

@property (readonly, nonatomic) unsigned long long numberOfObservers;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)enumerateObservers:(id /* block */)a0;

@end
