@class NSMutableArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ICDeviceSetupStatusMonitor : NSObject <ICNanoPairedDeviceStatusObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_pendingBuddyCompleteBlocks;
    NSMutableArray *_pendingSetupCompleteBlocks;
    BOOL _setupAssistantComplete;
    BOOL _watchInitialSyncIsComplete;
    int _setupAssistantFinishedNotifyToken;
    int _setupAssistantLaunchedNotifyToken;
}

@property (class, readonly, nonatomic) ICDeviceSetupStatusMonitor *sharedMonitor;

@property (readonly, nonatomic, getter=isSetupAssistantComplete) BOOL setupAssistantComplete;
@property (readonly, nonatomic, getter=isDeviceSetupComplete) BOOL deviceSetupComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performBlockAfterDeviceSetup:(id /* block */)a0;
- (void)nanoPairedDeviceStatusMonitor:(id)a0 didChangeClientSyncState:(unsigned long long)a1;
- (void)_runAllPendingBlocksOfType:(long long)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (void)performBlockAfterBuddySetup:(id /* block */)a0;

@end
