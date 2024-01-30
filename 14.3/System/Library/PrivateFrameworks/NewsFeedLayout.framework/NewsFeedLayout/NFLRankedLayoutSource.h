@class NSObject, NSMutableDictionary, FCThreadSafeMutableSet, NSOperationQueue, NSString, NFLFeedSettings, FCFetchCoordinator;
@protocol OS_dispatch_queue, NFLRankedLayoutSourceDelegate;

@interface NFLRankedLayoutSource : NSObject <FCFetchCoordinatorDelegate>

@property (copy, nonatomic) NFLFeedSettings *feedSettings;
@property (retain, nonatomic) FCFetchCoordinator *fetchCoordinator;
@property (retain, nonatomic) NSMutableDictionary *treesByTileInfo;
@property (retain, nonatomic) FCThreadSafeMutableSet *fulfilledRequests;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) double tileProminenceScoreBalanceValue;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (weak) id<NFLRankedLayoutSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)fetchCoordinator:(id)a0 fetchOperationForKeys:(id)a1 context:(id)a2 qualityOfService:(long long)a3 relativePriority:(long long)a4;
- (void)fetchCoordinator:(id)a0 filterKeysToFetch:(id)a1 isFirstAttempt:(BOOL)a2 context:(id)a3;
- (void)rankedLayoutsForRequests:(id)a0 completion:(id /* block */)a1;
- (id)initWithFeedSettings:(id)a0 qualityOfService:(long long)a1;
- (void)fetchCoordinator:(id)a0 addFetchOperation:(id)a1 context:(id)a2;

@end
