@class NSXPCListener, NSString, NSMutableDictionary, NSHashTable, BKSApplicationStateMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface PDAssertionManager : NSObject <NSXPCListenerDelegate, PDAssertionCoordinatorDelegate> {
    NSHashTable *_observers;
    NSXPCListener *_coordinatorListener;
    NSMutableDictionary *_coordinators;
    NSObject<OS_dispatch_queue> *_managerSerialQueue;
    BKSApplicationStateMonitor *_applicationStateMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidateAssertionOfType:(unsigned long long)a0 withIdentifier:(id)a1 handler:(id /* block */)a2;
- (id)assertionsOfType:(unsigned long long)a0;
- (id)_coordinatorsBundleIdentifier;
- (void)_applicationStateChanged:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)unregisterObserver:(id)a0;
- (void)_removeAllAssertionCoordinators;
- (void)acquireAssertionOfType:(unsigned long long)a0 withIdentifier:(id)a1 reason:(id)a2 handler:(id /* block */)a3;
- (void)_removeAssertionCoordinator:(id)a0;
- (void)_addAssertionCoordinator:(id)a0 forProcessIdentifier:(id)a1;
- (BOOL)assertionCoordinator:(id)a0 canAcquireAssertion:(id)a1;
- (void)assertionCoordinator:(id)a0 didAcquireAssertion:(id)a1;
- (void)assertionCoordinator:(id)a0 didInvalidateAssertion:(id)a1;
- (id)_processNameWithPID:(int)a0;

@end
