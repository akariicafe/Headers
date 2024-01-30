@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface _GEOExperimentConfigurationObserverProxy : NSObject {
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)description;
- (unsigned long long)observersCount;
- (void)forEachObserver:(id /* block */)a0;

@end
