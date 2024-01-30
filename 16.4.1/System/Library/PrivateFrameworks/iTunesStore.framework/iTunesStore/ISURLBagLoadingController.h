@class SSURLBag, NSDictionary, NSHashTable, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ISURLBagLoadingController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _hasSuccessfullyLoadedBag;
    NSDictionary *_bagDictionary;
    NSMutableArray *_bagAccessRequestBlocks;
    NSError *_bagLoadingError;
    NSHashTable *_bagObservers;
    SSURLBag *_URLBag;
}

@property (readonly, nonatomic) NSDictionary *bagDictionary;
@property (readonly, nonatomic, getter=isLoadingBag) BOOL loadingBag;

+ (id)sharedBagLoadingController;

- (void)dealloc;
- (void)_handleAccountStoreDidChangeNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateBagWithDictionary:(id)a0 error:(id)a1;
- (void)addBagObserver:(id)a0;
- (void)_didCompleteLoadingBagDictionary:(id)a0 withError:(id)a1;
- (void)_handleNetworkReachabilityFlagsDidChangeNotification:(id)a0;
- (void)_handleStoreFrontDidChangeNotification:(id)a0;
- (void)_reloadURLBagAllowingUpdateUsingExistingBagDictionary:(BOOL)a0;
- (void)reloadBag;
- (void)removeBagObserver:(id)a0;
- (void)requestAccessToBagUsingBlock:(id /* block */)a0;

@end
