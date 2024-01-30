@class NSString, NSMapTable, NFUnfairLock;
@protocol FCAVAssetResourceLoaderType, FCAVAssetKeyManagerType, FCAVAssetKeyCacheType, FCAVAssetCacheType;

@interface FCAVAssetFactory : NSObject <FCAVAssetFactoryType>

@property (readonly, nonatomic) id<FCAVAssetCacheType> assetCache;
@property (readonly, nonatomic) id<FCAVAssetKeyCacheType> assetKeyCache;
@property (readonly, nonatomic) id<FCAVAssetKeyManagerType> assetKeyManager;
@property (readonly, nonatomic) id<FCAVAssetResourceLoaderType> assetResourceLoader;
@property (readonly, nonatomic) NSMapTable *assets;
@property (readonly, nonatomic) NFUnfairLock *assetsLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
