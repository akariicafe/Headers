@class NSSet, NSString, NSMutableOrderedSet, NSOrderedSet, NSObject;
@protocol PUFilteredMomentsDataSourceDelegate, OS_dispatch_queue;

@interface PUFilteredMomentsDataSource : NSObject <PLDiagnosticsProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _taskId;
    NSMutableOrderedSet *_uncommittedContainers;
    NSSet *_uncommittedAssetUUIDs;
    NSOrderedSet *_containers;
    BOOL _hasPendingChanges;
}

@property (weak, nonatomic) id<PUFilteredMomentsDataSourceDelegate> delegate;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) NSSet *assetUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)fetchResult;
- (void)mergePendingChanges;
- (void)_inqClearPendingChanges;
- (BOOL)_inqIsCancelledWithTaskId:(unsigned long long)a0;
- (BOOL)_isCancelledWithTaskId:(unsigned long long)a0;
- (void)_updateAssetUUIDs:(id)a0 localIdenifiers:(id)a1 taskId:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)updateAssetUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)updateAssetUUIDs:(id)a0 localIdenifiers:(id)a1 completion:(id /* block */)a2;

@end
