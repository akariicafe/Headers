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

- (id)description;
- (void).cxx_destruct;
- (id)infoForAllAssetsWithTags:(id)a0 queue:(id)a1;
- (id)_manifestFilePath;
- (void)_removeAssetInfoForKey:(id)a0;
- (void)_removeAssetInfoForKey:(id)a0 removeFile:(BOOL)a1;
- (void)_saveManifest;
- (void)_updateManifestWithChange:(id /* block */)a0;
- (id)assetInfoForKey:(id)a0 queue:(id)a1;
- (id)infoForAllAssetsWithQueue:(id)a0;
- (id)initWithGroupType:(long long)a0 baseCachePath:(id)a1 folderName:(id)a2 maxCacheSize:(unsigned long long)a3 purgeOnLoad:(BOOL)a4;
- (void)removeAllAssetsWithQueue:(id)a0;
- (void)removeAssetInfoForKey:(id)a0 queue:(id)a1;
- (void)setAssetInfo:(id)a0 forKey:(id)a1 queue:(id)a2;
- (void)updateAssetsFromFiles;

@end
