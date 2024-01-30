@class REObserverStore;

@interface REObservableSingleton : RESingleton {
    REObserverStore *_store;
}

@property (readonly, nonatomic) unsigned long long numberOfObservers;

- (void)enumerateObservers:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (id)_init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;

@end
