@class SKUIClientContext;

@interface SKUIJSUpdatableAssetController : IKJSObject <SKUIJSUpdatableAssetController> {
    SKUIClientContext *_clientContext;
}

- (void).cxx_destruct;
- (void)refreshCachedManifest:(id)a0;
- (id)initWithAppContext:(id)a0 clientContext:(id)a1;
- (id)currentManifestVersion;
- (id)loadResource:(id)a0;
- (id)newestCachedManifestVersion;

@end
