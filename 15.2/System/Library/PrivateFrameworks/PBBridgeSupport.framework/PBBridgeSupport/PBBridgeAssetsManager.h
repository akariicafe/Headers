@class NSObject;
@protocol OS_dispatch_queue;

@interface PBBridgeAssetsManager : NSObject

@property (copy, nonatomic) id /* block */ assetDownloadCompletion;
@property (copy, nonatomic) id /* block */ allAssetsDownloadCompletion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)_runAssetQuery:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)beginPullingAssetsForAdvertisingName:(id)a0 completion:(id /* block */)a1;
- (void)_beginPullingAssetsForDeviceAttributes:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)hardwareGenerationForProductType:(id)a0;
- (id)_gatherQueries:(id)a0 withAtlas:(id)a1;
- (void)_beginDownloadsForAssets:(id)a0;
- (void)_runMultipleAssetQueries:(id)a0 completion:(id /* block */)a1;
- (id)_assetQueryForDeviceAttributes:(unsigned long long)a0 deviceAttributes:(id)a1 atlasDetails:(id)a2;
- (void)_checkAssetDownloadStateWithAssets:(id)a0;
- (void)beginPullingAssetsForDeviceMaterial:(unsigned long long)a0 size:(unsigned long long)a1 branding:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)beginPullingAssetsForDevice:(id)a0 completion:(id /* block */)a1;
- (void)purgeAllAssetsLocalOnly:(BOOL)a0;
- (id)_assetQueryForType:(unsigned long long)a0 forDevice:(id)a1 atlasDetails:(id)a2;

@end
