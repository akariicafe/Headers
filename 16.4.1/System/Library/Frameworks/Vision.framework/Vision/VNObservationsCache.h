@class NSMapTable;

@interface VNObservationsCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observationsCacheLock;
    NSMapTable *_observationsCache;
}

- (id)observationsForKey:(id)a0;
- (void)setObservations:(id)a0 forKey:(id)a1;
- (id)observationsAcceptedByRequest:(id)a0 testedKeyHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
