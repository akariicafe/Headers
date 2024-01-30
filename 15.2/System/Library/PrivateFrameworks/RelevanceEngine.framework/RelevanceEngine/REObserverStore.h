@class NSArray, NSHashTable;

@interface REObserverStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allObservers;

- (void)enumerateObserversWithBlock:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithFunctionsOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
