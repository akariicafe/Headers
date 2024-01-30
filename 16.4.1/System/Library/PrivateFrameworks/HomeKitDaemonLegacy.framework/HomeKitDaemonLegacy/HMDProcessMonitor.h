@class HMFTimer, NSArray, NSString, NSMutableSet, NSObject, RBSProcessMonitor;
@protocol OS_dispatch_queue;

@interface HMDProcessMonitor : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSProcessMonitor *_internal;
    NSMutableSet *_processes;
    BOOL _activeHomeKitApps;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcListenerQueue;
@property (retain, nonatomic) HMFTimer *spiClientTerminationDelayTimer;
@property (readonly, nonatomic) NSMutableSet *pendingTerminatedApplications;
@property (readonly, copy) NSArray *processes;
@property (readonly, copy) NSArray *foregroundProcesses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)addProcess:(id)a0;
- (void)removeProcess:(id)a0;
- (void)dealloc;
- (void)_removeProcess:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_processAppStateChange:(id)a0;
- (id)initWithXpcListenerQueue:(id)a0;
- (id)processInfoForConnection:(id)a0;
- (id)processInfoForPID:(int)a0;
- (void)removeFromPendingTerminated:(id)a0;
- (void)updateApplicationMonitor;

@end
