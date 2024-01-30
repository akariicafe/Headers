@class NSMutableDictionary;

@interface AVObservationController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSMutableDictionary *_proxyObserversByTokens;
    NSMutableDictionary *_notificationObservers;
    NSMutableDictionary *_notificationCenters;
    id _owner;
}

- (void)stopObserving:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOwner:(id)a0;
- (id)startObserving:(id)a0 keyPaths:(id)a1 includeInitialValue:(BOOL)a2 includeChanges:(BOOL)a3 observationHandler:(id /* block */)a4;
- (id)startObserving:(id)a0 keyPaths:(id)a1 observationHandler:(id /* block */)a2;
- (id)startObserving:(id)a0 keyPath:(id)a1 observationHandler:(id /* block */)a2;
- (id)startObserving:(id)a0 keyPaths:(id)a1 includeInitialValue:(BOOL)a2 observationHandler:(id /* block */)a3;
- (void)startObservingNotificationForName:(id)a0 object:(id)a1 notificationCenter:(id)a2 observationHandler:(id /* block */)a3;
- (void)_stopAllObservation;
- (void)stopAllObservation;
- (id)startObserving:(id)a0 keyPath:(id)a1 includeInitialValue:(BOOL)a2 observationHandler:(id /* block */)a3;

@end
