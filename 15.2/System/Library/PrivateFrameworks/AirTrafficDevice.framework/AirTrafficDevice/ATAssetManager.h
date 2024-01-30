@class NSMutableArray, NSString, NSDictionary, NSMutableSet, NSMutableDictionary, NSObject, NSHashTable;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATAssetManager : NSObject <ATAssetLinkControllerObserver, ATMessageLinkRequestHandler> {
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_assetClients;
    NSDictionary *_legacyAssetClients;
    NSMutableSet *_allAssets;
    NSMutableDictionary *_remainingAssetsByDataClass;
    NSMutableDictionary *_totalAssetCountByDataClass;
    NSHashTable *_observers;
    NSMutableArray *_assets;
    NSMutableDictionary *_assetsByDataclass;
    NSMutableDictionary *_assetsByStoreID;
    NSMutableArray *_completedStoreAssets;
    unsigned long long _completedAssets;
    unsigned long long _totalAssetCount;
    NSObject<OS_dispatch_source> *_signalSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)assets;
- (unsigned long long)totalAssetCount;
- (unsigned long long)currentAsset;
- (void)messageLink:(id)a0 didReceiveRequest:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)allDataclasses;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (void)assetLinkController:(id)a0 didFinishAsset:(id)a1;
- (void)dealloc;
- (void)reset;
- (void)assetLinkController:(id)a0 didUpdateAsset:(id)a1;
- (id)legacyAssetsForDataClass:(id)a0;
- (void)enqueueLegacyAssetsForDataClass:(id)a0;
- (void)prioritizeAssetForDataClass:(id)a0 withIdentifier:(id)a1;
- (void)cancelAssetForDataClass:(id)a0 withIdentifier:(id)a1;
- (id)assetProgressForAllDataclasses;
- (void)_loadAssetClients;
- (void)_addAssets:(id)a0 forDataClass:(id)a1;
- (void)_finishAsset:(id)a0 forDataClass:(id)a1;
- (void)_finishDataClassIfDone:(id)a0;
- (void)_updateAsset:(id)a0 withProgress:(float)a1;
- (id)_assetForDataclass:(id)a0 withIdentifier:(id)a1;
- (void)_dumpStatusInformation;
- (unsigned long long)totalAssetCountForDataclass:(id)a0;
- (unsigned long long)currentAssetForDataclass:(id)a0;
- (unsigned long long)awaitingStoreCompletion;
- (void)mapStoreIDToAsset:(id)a0;
- (id)assetForStoreID:(long long)a0;
- (id)assetForDataclass:(id)a0 identifier:(id)a1;
- (id)completedStoreAssets;
- (id)storeAssetsForDataclass:(id)a0;
- (id)restoreAssetsForDataclass:(id)a0;
- (id)bypassedRestoresForDataclass:(id)a0;
- (id)assetsForDataclasses:(id)a0;
- (id)restoreAssetsForDataclasses:(id)a0;
- (unsigned long long)remainingSyncAssetCountForDataClasses:(id)a0;
- (unsigned long long)remainingRestoreAssetCountForDataClasses:(id)a0;
- (unsigned long long)totalAssetCountForDataClasses:(id)a0;
- (unsigned long long)completedAssetCountForDataClasses:(id)a0;
- (BOOL)dataclassIsEmpty:(id)a0;

@end
