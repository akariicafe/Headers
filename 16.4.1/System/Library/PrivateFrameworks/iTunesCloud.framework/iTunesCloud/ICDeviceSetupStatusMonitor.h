@class NSMutableArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ICDeviceSetupStatusMonitor : NSObject <ICNanoPairedDeviceStatusObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_pendingBuddyCompleteBlocks;
    NSMutableArray *_pendingSetupCompleteBlocks;
    BOOL _setupAssistantComplete;
    BOOL _watchInitialSyncIsComplete;
    int _setupAssistantFinishedNotifyToken;
    int _setupAssistantLaunchedNotifyToken;
}

@property (class, readonly, nonatomic) ICDeviceSetupStatusMonitor *sharedMonitor;

@property (nonatomic, getter=isSetupAssistantComplete) BOOL setupAssistantComplete;
@property (readonly, nonatomic, getter=isDeviceSetupComplete) BOOL deviceSetupComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performBlockAfterBuddySetup:(id /* block */)a0;
- (id)_init;
- (void)nanoPairedDeviceStatusMonitor:(id)a0 didChangeClientSyncState:(unsigned long long)a1;
- (void)dealloc;
- (void)performBlockAfterDeviceSetup:(id /* block */)a0;
- (void)_runAllPendingBlocksOfType:(long long)a0;
- (void).cxx_destruct;

@end
