@class TPSTip, NSOperationQueue, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TPSTipsAssetPrefetchingManager : NSObject

@property (nonatomic, getter=isCompactViewMode) BOOL compactViewMode;
@property (nonatomic, getter=isBookendCompactViewMode) BOOL bookendCompactViewMode;
@property (nonatomic) long long assetUserInterface;
@property (copy, nonatomic) TPSTip *currentTip;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableArray *sessionItems;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)cancelFetch;
- (void)appendAssetsOperationsForTip:(id)a0;
- (void)addFetchOperationWithAssetConfiguration:(id)a0 type:(long long)a1 operationName:(id)a2;
- (void)prefetchAssetsFromTip:(id)a0 tips:(id)a1 isCompactViewMode:(BOOL)a2 isBookendCompactViewMode:(BOOL)a3 assetUserInterface:(long long)a4;

@end
