@class NSHashTable;

@interface CSLPRFObservationHelper : NSObject {
    NSHashTable *_lock_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) unsigned long long observerCount;

- (void)addObserver:(id)a0;
- (void)notifyObserversWithBlock:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
