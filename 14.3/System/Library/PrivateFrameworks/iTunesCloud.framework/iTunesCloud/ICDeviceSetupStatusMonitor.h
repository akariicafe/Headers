@class NSMutableArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ICDeviceSetupStatusMonitor : NSObject <ICNanoPairedDeviceStatusObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_pendingBuddyCompleteBlocks;
    NSMutableArray *_pendingSetupCompleteBlocks;
    BOOL _setupAssistantRunning;
    int _setupAssistantFinishedNotifyToken;
    int _setupAssistantLaunchedNotifyToken;
}

@property (class, readonly) ICDeviceSetupStatusMonitor *sharedMonitor;

@property (readonly, nonatomic, getter=isSetupAssistantRunning) BOOL setupAssistantRunning;
@property (readonly, nonatomic, getter=isDeviceSetupComplete) BOOL deviceSetupComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performBlockAfterDeviceSetup:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performBlockAfterBuddySetup:(id /* block */)a0;
- (id)_init;
- (void)_runAllPendingBlocksOfType:(long long)a0;
- (void)nanoPairedDeviceStatusMonitor:(id)a0 didChangeClientSyncState:(unsigned long long)a1;

@end
