@class NSArray, NSString, MBManager, MBCellularAccess, NSMutableArray, NSObject;
@protocol ATRestoreAssetLinkDelegate, ATAssetLinkDelegate, OS_dispatch_queue;

@interface ATRestoreAssetLink : NSObject <MBManagerDelegate, ICEnvironmentMonitorObserver, ATAssetLink> {
    MBManager *_mbManager;
    int _restoreState;
    MBCellularAccess *_restoreCellularPolicy;
    NSMutableArray *_queuedAssets;
    NSMutableArray *_activeAssets;
    BOOL _isRestoring;
    BOOL _batchingIsSupported;
    BOOL _singleAssetMode;
    unsigned long long _batchSize;
    int _mbCellularAccessChangedNotificationToken;
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

- (void)prioritizeAsset:(id)a0;
- (unsigned long long)maximumBatchSize;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (id)_currentCellularPolicy;
- (BOOL)hasProperNetworkConditions;
- (void)close;
- (void)managerDidLoseConnectionToService:(id)a0;
- (BOOL)open;
- (BOOL)linkIsReady;
- (void)restoreSessionActiveWithCompletion:(id /* block */)a0;
- (void)processRestoreFailureForAsset:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (id)init;
- (id)enqueueAssets:(id)a0 force:(BOOL)a1;
- (void)manager:(id)a0 didUpdateProgress:(float)a1 estimatedTimeRemaining:(unsigned long long)a2;
- (void)manager:(id)a0 didFailRestoreWithError:(id)a1;
- (void)managerDidCancelRestore:(id)a0;
- (void)managerDidFinishRestore:(id)a0;
- (BOOL)canEnqueueAsset:(id)a0;
- (void)_processQueuedAssets;
- (void)finishRestore;
- (void)cancelAssets:(id)a0;

@end
