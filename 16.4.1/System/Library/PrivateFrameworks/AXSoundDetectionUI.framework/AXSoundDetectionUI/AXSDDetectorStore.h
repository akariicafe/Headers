@class NSString, NSMutableDictionary, NSPointerArray, NSMutableArray, AXUltronModelAssetManager;

@interface AXSDDetectorStore : NSObject <AXSDUltronModelAssetManagerDelegate> {
    NSPointerArray *_observers;
    AXUltronModelAssetManager *_assetManager;
    BOOL _detectorsReady;
}

@property (retain, nonatomic) NSMutableDictionary *detectors;
@property (retain, nonatomic) NSMutableArray *purgedDetectors;
@property (readonly, nonatomic) long long totalDownloadSize;
@property (readonly, nonatomic) long long totalUnarchivedFileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (BOOL)isAssetCatalogInstalled;
- (BOOL)hasInProgressDownloads;
- (void).cxx_destruct;
- (unsigned long long)numberOfObservers;
- (void)_enumerateObserversWithBlock:(id /* block */)a0;
- (id)detectorWithName:(id)a0;
- (void)enableDetector:(id)a0;
- (id)_addDetectorForAXAsset:(id)a0;
- (void)assetsNotReadyForUltronManager:(id)a0;
- (id)customDetectors;
- (id)_detectorsNeedingUpgrade;
- (void)_downloadAssetsFromDetectors:(id)a0;
- (void)_notifyObserversAvailableDetectorsDidUpdate:(id)a0;
- (void)_notifyObserversDetectorsAreReady;
- (void)_notifyObserversDetectorsDownloadProgress:(long long)a0 totalSizeExpected:(long long)a1 remainingTimeExpected:(double)a2 isStalled:(BOOL)a3;
- (void)_notifyObserversDetectorsDownloadProgress:(long long)a0 totalSizeExpected:(long long)a1 remainingTimeExpected:(double)a2 isStalled:(BOOL)a3 error:(id)a4;
- (void)_notifyObserversDetectorsNeedUpdate:(id)a0 toDetectors:(id)a1;
- (void)_notifyObserversDidFinishRefreshingDetectors:(id)a0 wasSuccessful:(BOOL)a1 error:(id)a2;
- (void)_purgeAssetsFromDetectors:(id)a0;
- (void)_reloadCustomDetectors;
- (void)_removeCustomDetectors;
- (void)_toggleDetectorsBasedOnSettingsChange;
- (id)allDetectors;
- (id)allDetectorsByIdentifier;
- (BOOL)areDetectorsReady;
- (void)assetManager:(id)a0 didFinishRefreshingAssets:(id)a1 wasSuccessful:(BOOL)a2 error:(id)a3;
- (void)assetManager:(id)a0 totalSizeExpected:(long long)a1 downloadProgressTotalWritten:(long long)a2 remainingTimeExpected:(double)a3 isStalled:(BOOL)a4;
- (void)assetsReadyForUltronManager:(id)a0;
- (id)detectorWithAssetID:(id)a0;
- (id)detectorWithIdentifier:(id)a0;
- (id)detectorsByIdentifier;
- (void)disableDetector:(id)a0;
- (void)disableDetectorWithIdentifier:(id)a0;
- (void)downloadDetectors;
- (id)enabledDetectors;
- (id)installedDetectors;
- (void)loadDetectors;
- (void)purgeDetectors;
- (void)stopDownloadOfDetectors;
- (id)supportedDetectors;
- (id)unInstalledDetectors;

@end
