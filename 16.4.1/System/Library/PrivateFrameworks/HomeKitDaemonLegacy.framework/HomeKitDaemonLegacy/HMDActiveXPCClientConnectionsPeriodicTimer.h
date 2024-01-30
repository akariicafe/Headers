@class HMFTimer, NSString, NSSet, NSHashTable, NSObject;
@protocol OS_dispatch_queue, HMDActiveXPCClientConnectionsPeriodicTimerDelegate;

@interface HMDActiveXPCClientConnectionsPeriodicTimer : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSHashTable *mutableClientConnections;
@property (retain) HMFTimer *timer;
@property (copy) id /* block */ timerFactory;
@property (readonly) double timeInterval;
@property (readonly, copy) NSSet *clientConnections;
@property (weak) id<HMDActiveXPCClientConnectionsPeriodicTimerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)_updateTimer;
- (void).cxx_destruct;
- (void)removeClientConnection:(id)a0;
- (void)addClientConnection:(id)a0;
- (void)handleClientConnectionDidActivate:(id)a0;
- (void)handleClientConnectionDidDeactivate:(id)a0;
- (id)initWithTimeInterval:(double)a0 logIdentifier:(id)a1 workQueue:(id)a2;

@end
