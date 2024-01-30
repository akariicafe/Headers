@class NSString, NSDate, NSObject, WBSPeriodicActivityScheduler;
@protocol OS_dispatch_queue, WBSMobileAssetControllerDelegate;

@interface WBSMobileAssetController : NSObject <WBSMobileAssetControllerProtocol> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSPeriodicActivityScheduler *_scheduler;
}

@property (weak) id<WBSMobileAssetControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *assetType;
@property (readonly, copy, nonatomic) NSString *updateDateDefaultsKey;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (readonly, nonatomic) double updateInterval;

- (void).cxx_destruct;
- (void)_update;
- (void)queryURL:(id /* block */)a0;
- (id)initWithMobileAssetType:(id)a0 updateInterval:(double)a1 minimumDelay:(double)a2;
- (id)initWithMobileAssetType:(id)a0 updateDateDefaultsKey:(id)a1 updateInterval:(double)a2 minimumDelay:(double)a3;
- (void)_queryMostRecentAsset:(id /* block */)a0;
- (void)_downloadIfNecessary:(id /* block */)a0;
- (void)_updateCatalog:(id /* block */)a0;
- (void)_queryAssets:(id /* block */)a0;

@end
