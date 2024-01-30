@class NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface FCAssetsFetchOperation : FCFetchOperation

@property (copy, nonatomic) NSArray *assetHandles;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) unsigned long long maxConcurrentFetchCount;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ interestTokenHandler;
@property (copy, nonatomic) id /* block */ archiveHandler;

- (void).cxx_destruct;
- (id)initWithAssetHandles:(id)a0;
- (void)_finish;
- (id)initWithAssetHandle:(id)a0;
- (void)performOperation;

@end
