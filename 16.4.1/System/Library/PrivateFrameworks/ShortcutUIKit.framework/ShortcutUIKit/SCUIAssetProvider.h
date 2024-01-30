@class NSURL, _UIAssetManager;

@interface SCUIAssetProvider : NSObject {
    NSURL *_bundleURL;
    _UIAssetManager *_assetManager;
}

- (id)imageNamed:(id)a0;
- (id)_assetManager;
- (id)initWithBundleURL:(id)a0;
- (void).cxx_destruct;

@end
