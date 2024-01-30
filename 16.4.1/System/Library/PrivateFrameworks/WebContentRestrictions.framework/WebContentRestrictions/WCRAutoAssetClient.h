@class MAAutoAssetSelector, NSObject;
@protocol OS_dispatch_queue;

@interface WCRAutoAssetClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (copy, nonatomic) id /* block */ assetDidChangeHandler;
@property (retain, nonatomic) MAAutoAssetSelector *currentAssetSelector;

- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (void)_handleAssetChangedNotification;
- (id)_lockLocalAsset;
- (BOOL)_createInterestInAssetType:(id)a0 withAssetSpecifier:(id)a1 withError:(id *)a2;
- (void)_endLocalAssetLocks;
- (void)_registerForNotificationsForAssetType:(id)a0 andAssetSpecifier:(id)a1;
- (void)_removeInterestInAssetType:(id)a0 withAssetSpecifier:(id)a1 withError:(id *)a2;
- (void)registerForAssetChangedNotificationsWithBlock:(id /* block */)a0;
- (id)startUsingLocalAsset;
- (void)stopUsingLocalAsset;

@end
