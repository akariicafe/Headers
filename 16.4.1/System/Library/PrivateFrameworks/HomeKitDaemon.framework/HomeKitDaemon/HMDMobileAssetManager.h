@class NSBackgroundActivityScheduler, NSObject;
@protocol OS_dispatch_queue, HMDMobileAssetManagerDelegate;

@interface HMDMobileAssetManager : NSObject

@property BOOL indexDownloaded;
@property (readonly, nonatomic) NSBackgroundActivityScheduler *scheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) id<HMDMobileAssetManagerDelegate> delegate;

- (void)_updateMetadata;
- (id)init;
- (void).cxx_destruct;
- (void)_installAvailableAsset:(id)a0 version:(unsigned long long)a1;
- (void)_downloadCatalogAndUpdateMetadataIfAble;
- (void)_downloadNewAsset:(id)a0 availableVersion:(unsigned long long)a1 newVersion:(unsigned long long)a2;
- (void)_handleMetadataAssetUpdated;
- (void)handleMetadataAssetUpdated;
- (void)purgeAllInstalledAssets;

@end
