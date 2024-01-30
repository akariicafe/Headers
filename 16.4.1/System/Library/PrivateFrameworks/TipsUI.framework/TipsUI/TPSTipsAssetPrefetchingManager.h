@class TPSTip, NSOperationQueue, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TPSTipsAssetPrefetchingManager : NSObject

@property (nonatomic) long long assetUserInterface;
@property (copy, nonatomic) TPSTip *currentTip;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableArray *sessionItems;

- (void)cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelFetch;
- (void)addFetchOperationWithAssetConfiguration:(id)a0 type:(long long)a1 operationName:(id)a2;
- (void)appendAssetsOperationsForTip:(id)a0;
- (void)prefetchAssetsFromTip:(id)a0 tips:(id)a1 assetUserInterfaceStyle:(long long)a2;

@end
