@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface _GEOExperimentConfigurationObserverProxy : NSObject {
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)registerObserver:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)forEachObserver:(id /* block */)a0;
- (unsigned long long)observersCount;

@end
