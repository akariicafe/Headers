@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CSRemoteAssetManager : NSObject {
    NSString *_currentLanguageCode;
    NSString *_resourcePath;
    NSString *_configVersion;
    NSString *_assetHash;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
}

+ (id)sharedManager;

- (id)languageCode;
- (void)addObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (id)assetForCurrentLanguageOfType:(unsigned long long)a0;
- (void)removeObserver:(id)a0 forAssetType:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)setLanguageCode:(id)a0 resourcePath:(id)a1 configVersion:(id)a2 assetHash:(id)a3 assetType:(unsigned long long)a4;
- (id)assetConfigVersionForAssetType:(unsigned long long)a0;
- (BOOL)_loadFromJsonFile:(id)a0;
- (id)_loadJsonDataFromFile:(id)a0;
- (BOOL)_loadPreinstalledAssetMetaIfNeeded;
- (id)_remoteAssetMetaPath;
- (void)_setAssetsInfoFromMetaData:(id)a0;
- (BOOL)_writeToJsonFile:(id)a0;
- (id)assetHashForAssetType:(unsigned long long)a0;
- (id)resourcePathForAssetType:(unsigned long long)a0;

@end
