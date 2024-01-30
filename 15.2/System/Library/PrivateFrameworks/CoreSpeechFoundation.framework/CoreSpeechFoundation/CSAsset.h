@class NSString, NSDictionary;

@interface CSAsset : NSObject {
    NSDictionary *_decodedInfo;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *hashFromResourcePath;
@property (readonly, nonatomic) NSString *configVersion;
@property (readonly, nonatomic) unsigned long long assetProvider;

+ (id)fallBackAssetResourcePath;
+ (id)defaultFallBackAssetForVoiceTrigger;
+ (id)decodeJson:(id)a0;
+ (id)assetForAssetType:(unsigned long long)a0 resourcePath:(id)a1 configVersion:(id)a2;
+ (id)assetForAssetType:(unsigned long long)a0 resourcePath:(id)a1 configVersion:(id)a2 assetProvider:(unsigned long long)a3;
+ (id)hybridEndpointerAssetFilename;
+ (id)getConfigFileNameForAssetType:(unsigned long long)a0;
+ (id)defaultFallBackAssetForSmartSiriVolume;
+ (id)defaultFallBackAssetForHearst;
+ (id)defaultFallBackAssetForAdBlocker;
+ (id)defaultFallBackAssetPathForUres;
+ (unsigned long long)parseCompatibilityFromConfigVersion:(id)a0;
+ (BOOL)isLeftConfigVersion:(id)a0 newerThanRightConfigVersion:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)getNumberForKey:(id)a0 category:(id)a1 default:(id)a2;
- (id)getStringForKey:(id)a0 category:(id)a1 default:(id)a2;
- (id)assetHashInResourcePath:(id)a0;
- (BOOL)containsCategory:(id)a0;
- (BOOL)containsKey:(id)a0 category:(id)a1;
- (BOOL)isEqualAsset:(id)a0;
- (BOOL)getBoolForKey:(id)a0 category:(id)a1 default:(BOOL)a2;
- (id)initWithResourcePath:(id)a0 configFile:(id)a1 configVersion:(id)a2 assetProvderType:(unsigned long long)a3;
- (id)stringForCurrentAssetProviderType;

@end
