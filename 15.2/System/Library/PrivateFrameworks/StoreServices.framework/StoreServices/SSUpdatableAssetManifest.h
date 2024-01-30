@class NSArray, NSDictionary, NSURL, NSString, SSUpdatableAsset, NSCache;

@interface SSUpdatableAssetManifest : NSObject {
    NSDictionary *_assetsByName;
    NSCache *_imageCache;
}

@property (copy, nonatomic, setter=_setAssets:) NSArray *assets;
@property (retain, nonatomic, setter=_setBootstrapAsset:) SSUpdatableAsset *bootstrapAsset;
@property (retain, nonatomic, setter=_setCacheURL:) NSURL *cacheURL;
@property (copy, nonatomic, setter=_setExtraInfo:) NSDictionary *extraInfo;
@property (nonatomic, setter=_setLastModifiedTimestamp:) double lastModifiedTimestamp;
@property (copy, nonatomic, setter=_setName:) NSString *name;
@property (nonatomic, setter=_setPollInterval:) double pollInterval;
@property (nonatomic, setter=_setReloadUrgencyType:) long long reloadUrgencyType;
@property (retain, nonatomic, setter=_setServerURL:) NSURL *serverURL;
@property (copy, nonatomic, setter=_setVersion:) NSString *version;

+ (id)_osVersionString;

- (void).cxx_destruct;
- (id)assetWithName:(id)a0;

@end
