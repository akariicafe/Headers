@class NSObject, NSString, PSYSyncCoordinator;
@protocol OS_dispatch_queue, HMDPairedSyncDelegate;

@interface HMDPairedSync : HMFObject <PSYSyncCoordinatorDelegate>

@property (readonly, weak) id<HMDPairedSyncDelegate> delegate;
@property (readonly, nonatomic) PSYSyncCoordinator *coordinator;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) unsigned long long currentOperationCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (void).cxx_destruct;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)a0;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (id)restrictionAsString:(unsigned long long)a0;
- (void)needToSync;
- (void)_callStartSync;
- (void)syncComplete;
- (void)syncPartiallyComplete;

@end
