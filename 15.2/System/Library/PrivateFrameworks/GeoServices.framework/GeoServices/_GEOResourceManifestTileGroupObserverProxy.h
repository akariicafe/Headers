@class NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface _GEOResourceManifestTileGroupObserverProxy : NSObject {
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)registerObserver:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
