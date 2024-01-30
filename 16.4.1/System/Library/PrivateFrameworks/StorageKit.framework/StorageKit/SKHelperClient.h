@class NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SKHelperClient : NSObject <SKHelperClientProtocol, SKDaemonProtocol> {
    NSXPCConnection *_connection;
    NSMutableDictionary *_progressBlockDictionary;
    NSMutableDictionary *_completionBlockDictionary;
    NSMutableDictionary *_errorBlockDictionary;
    id /* block */ _progressBlock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _isInvalidated;
}

@property (retain) NSMutableDictionary *recacheAbuseLimiterInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (id)_xpcConnection;
- (id)init;
- (void).cxx_destruct;
- (void)isBusy:(id /* block */)a0;
- (BOOL)_isRecachingDiskAbuse:(id)a0;
- (void)_markConnectionInvalidAndCallAllCallbacks;
- (id)_parameters:(id)a0 valueAtIndex:(unsigned long long)a1;
- (void)_scheduleCompletionUUID:(id)a0 forFunction:(const char *)a1 withBlock:(id /* block */)a2;
- (void)_setProgressHandler:(id /* block */)a0 forUUID:(id)a1;
- (void)childDisksForWholeDisk:(id)a0 withCallbackBlock:(id /* block */)a1;
- (void)diskForPath:(id)a0 withCallbackBlock:(id /* block */)a1;
- (id)diskNotificationQueue;
- (void)disksAppeared:(id)a0;
- (void)disksChanged:(id)a0;
- (void)disksDisappeared:(id)a0;
- (void)ejectDisk:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)filesystemsWithCallbackBlock:(id /* block */)a0;
- (void)initialPopulateComplete;
- (void)managerResumed;
- (void)managerStalled;
- (void)mountDisk:(id)a0 options:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)physicalStoresForAPFSVolume:(id)a0 completionBlock:(id /* block */)a1;
- (void)recacheDisk:(id)a0 options:(unsigned long long)a1 callbackBlock:(id /* block */)a2;
- (id)remoteObjectWithUUID:(id)a0 errorHandler:(id /* block */)a1;
- (void)renameDisk:(id)a0 to:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)requestWithUUID:(id)a0 didCompleteWithResult:(id)a1;
- (void)setDaemonLanguage:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)syncAllDisksWithCompletionBlock:(id /* block */)a0;
- (id)synchronousRemoteObjecUUID:(id)a0 tWithErrorHandler:(id /* block */)a1;
- (void)unmountDisk:(id)a0 options:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)unmountDisk:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)updateUUID:(id)a0 progress:(float)a1 message:(id)a2;
- (void)volumesForAPFSPS:(id)a0 completionBlock:(id /* block */)a1;
- (void)wholeDiskForDisk:(id)a0 withCallbackBlock:(id /* block */)a1;

@end
