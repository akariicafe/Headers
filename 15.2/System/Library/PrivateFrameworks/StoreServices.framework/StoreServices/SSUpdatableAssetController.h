@class NSString, SSUpdatableAssetCacheManager, NSURL, SSXPCConnection, SSUpdatableAssetManifest, NSObject;
@protocol OS_dispatch_queue;

@interface SSUpdatableAssetController : NSObject {
    NSString *_bundledManifestVersion;
    SSUpdatableAssetManifest *_bundledManifest;
    SSUpdatableAssetManifest *_currentManifest;
    SSUpdatableAssetCacheManager *_cacheManager;
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) SSUpdatableAssetManifest *currentManifest;
@property (readonly, nonatomic) SSUpdatableAssetManifest *newestCachedManifest;
@property (readonly, nonatomic) NSURL *bundledManifestURL;
@property (copy, nonatomic) NSURL *manifestURL;

- (id)_connection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBundledManifestURL:(id)a0 clientIdentifier:(id)a1;
- (id)_bundledManifestVersion;
- (id)_bundledManifest;
- (id)initWithBundledManifestURL:(id)a0;
- (void)clearCache:(id /* block */)a0;
- (void)refreshCachedManifest:(id /* block */)a0;

@end
