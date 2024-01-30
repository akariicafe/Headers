@class NSString, NSMutableDictionary;

@interface VUIAssetGroup : NSObject

@property (nonatomic) long long groupType;
@property (retain, nonatomic) NSString *cachePath;
@property (nonatomic) unsigned long long maxCacheSize;
@property (nonatomic) unsigned long long currentCacheSize;
@property (retain, nonatomic) NSMutableDictionary *cacheRecords;
@property (retain, nonatomic) NSMutableDictionary *assetKeysByTag;
@property (retain, nonatomic) NSMutableDictionary *manifest;
@property (nonatomic, getter=isManifestDirty) BOOL manifestDirty;
@property (nonatomic) unsigned long long pruneCount;

+ (id)_humanReadableStringForGroupType:(long long)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithGroupType:(long long)a0 baseCachePath:(id)a1 folderName:(id)a2 maxCacheSize:(unsigned long long)a3 purgeOnLoad:(BOOL)a4;
- (id)assetInfoForKey:(id)a0 queue:(id)a1;
- (id)infoForAllAssetsWithTags:(id)a0 queue:(id)a1;
- (void)removeAssetInfoForKey:(id)a0 queue:(id)a1;
- (void)setAssetInfo:(id)a0 forKey:(id)a1 queue:(id)a2;
- (void)removeAllAssetsWithQueue:(id)a0;
- (void)updateAssetsFromFiles;
- (id)infoForAllAssetsWithQueue:(id)a0;
- (void)_removeAssetInfoForKey:(id)a0 removeFile:(BOOL)a1;
- (void)_updateManifestWithChange:(id /* block */)a0;
- (void)_removeAssetInfoForKey:(id)a0;
- (id)_manifestFilePath;
- (void)_saveManifest;

@end
