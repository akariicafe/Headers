@class NSString, NSDictionary, NSURL, AVURLAsset, FCContentArchive, NFUnfairLock;
@protocol FCAVAssetResourceLoaderType, FCAVAssetKeyManagerType, FCAVAssetKeyCacheType, FCAVAssetCacheType;

@interface FCAVAsset : NSObject <NSCopying, FCContentArchivable>

@property (readonly, copy, nonatomic) NSDictionary *assetOptions;
@property (readonly, nonatomic) NFUnfairLock *assetLock;
@property (readonly, weak, nonatomic) id<FCAVAssetCacheType> assetCache;
@property (readonly, weak, nonatomic) id<FCAVAssetKeyCacheType> assetKeyCache;
@property (readonly, weak, nonatomic) id<FCAVAssetResourceLoaderType> assetResourceLoader;
@property (readonly, weak, nonatomic) id<FCAVAssetKeyManagerType> assetKeyManager;
@property (readonly, copy, nonatomic) NSURL *remoteURL;
@property (readonly, nonatomic) BOOL isHLS;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) AVURLAsset *asset;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_resetUnderlyingAsset;
- (id)initWithIdentifier:(id)a0 remoteURL:(id)a1 assetCache:(id)a2 assetKeyCache:(id)a3 assetKeyManager:(id)a4 assetResourceLoader:(id)a5 overrideMIMEType:(id)a6;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
