@class NSMutableSet, NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface OSADiagnosticMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableArray *_eventObservers;
    NSMutableArray *_writeObservers;
    NSMutableSet *_observedEventTypes;
    NSMutableSet *_observedWriteTypes;
    NSXPCConnection *_serverConnection;
}

@property (class, readonly, nonatomic) OSADiagnosticMonitor *sharedMonitor;

- (void).cxx_destruct;
- (id)init;
- (void)q_addEventObserver:(id)a0 forTypes:(id)a1;
- (void)q_removeEventObserver:(id)a0 andComputeObservedTypes:(BOOL)a1;
- (void)q_teardownServerConnectionIfNoMoreObservers;
- (void)q_addWriteObserver:(id)a0 forTypes:(id)a1;
- (void)q_removeWriteObserver:(id)a0 andComputeObservedTypes:(BOOL)a1;
- (void)q_computeEventObserverTypes;
- (void)q_computeWriteObserverTypes;
- (void)q_registerForEventTypes;
- (void)q_registerForWriteTypes;
- (id)q_serverConnection;
- (void)addEventObserver:(id)a0 forTypes:(id)a1;
- (void)removeEventObserver:(id)a0;
- (void)addWriteObserver:(id)a0 forTypes:(id)a1;
- (void)removeWriteObserver:(id)a0;
- (void)receivedLogEvent:(id)a0;
- (void)willWriteLog:(id)a0;
- (void)didWriteLog:(id)a0;

@end
