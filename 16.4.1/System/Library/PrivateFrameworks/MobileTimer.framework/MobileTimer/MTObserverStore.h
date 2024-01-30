@class NSHashTable;
@protocol NAScheduler;

@interface MTObserverStore : NSObject

@property (retain, nonatomic) id<NAScheduler> callbackScheduler;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observersLock;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) unsigned long long count;

- (id)initWithCallbackScheduler:(id)a0;
- (void)enumerateObserversWithBlock:(id /* block */)a0;
- (BOOL)containsObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0 wasLast:(BOOL *)a1;
- (void)_withLock:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 wasFirst:(BOOL *)a1;
- (id)init;
- (void).cxx_destruct;

@end
