@class NSArray, NSString, MBManager, NSMutableArray, NSObject;
@protocol ATRestoreAssetLinkDelegate, ATAssetLinkDelegate, OS_dispatch_queue;

@interface ATRestoreAssetLink : NSObject <MBManagerDelegate, ATEnvironmentMonitorObserver, ATAssetLink> {
    MBManager *_mbManager;
    NSMutableArray *_queuedAssets;
    NSMutableArray *_activeAssets;
    int _restoreState;
    BOOL _isRestoring;
    BOOL _batchingIsSupported;
    BOOL _singleAssetMode;
    unsigned long long _batchSize;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSArray *allowedDataClasses;
@property (weak, nonatomic) id<ATRestoreAssetLinkDelegate> restoreDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (weak, nonatomic) id<ATAssetLinkDelegate> delegate;

- (void)finishRestore;
- (void)managerDidLoseConnectionToService:(id)a0;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)manager:(id)a0 didUpdateProgress:(float)a1 estimatedTimeRemaining:(unsigned long long)a2;
- (unsigned long long)maximumBatchSize;
- (void)manager:(id)a0 didFailRestoreWithError:(id)a1;
- (unsigned long long)priority;
- (void)processRestoreFailureForAsset:(id)a0;
- (BOOL)_hasConnectivity;
- (BOOL)linkIsReady;
- (void)managerDidCancelRestore:(id)a0;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)cancelAssets:(id)a0;
- (BOOL)open;
- (id)enqueueAssets:(id)a0 force:(BOOL)a1;
- (void)_processQueuedAssets;
- (BOOL)canEnqueueAsset:(id)a0;
- (void)prioritizeAsset:(id)a0;
- (void)restoreSessionActiveWithCompletion:(id /* block */)a0;
- (void)managerDidFinishRestore:(id)a0;

@end
