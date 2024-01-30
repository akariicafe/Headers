@class NSSet, PHFetchResult, NSString, NSObject;
@protocol OS_dispatch_queue, PUSearchGridDataSourceDelegate;

@interface PUSearchGridDataSource : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long taskId;
@property (nonatomic) BOOL hasPendingChanges;
@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (retain, nonatomic) NSSet *assetUUIDs;
@property (weak, nonatomic) id<PUSearchGridDataSourceDelegate> delegate;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic) unsigned long long searchCategories;
@property (retain, nonatomic) NSString *title;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_inqIsCancelledWithTaskId:(unsigned long long)a0;
- (BOOL)_isCancelledWithTaskId:(unsigned long long)a0;
- (void)updateAssetUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)_inqClearPendingChanges;
- (void)mergePendingChanges;
- (void)updateFetchResult:(id)a0 completion:(id /* block */)a1;
- (void)_updateFetchResult:(id)a0 taskId:(unsigned long long)a1 completion:(id /* block */)a2;

@end
