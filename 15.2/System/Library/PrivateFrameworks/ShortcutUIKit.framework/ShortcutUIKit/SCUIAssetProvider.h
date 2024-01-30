@class NSURL, _UIAssetManager;

@interface SCUIAssetProvider : NSObject {
    NSURL *_bundleURL;
    _UIAssetManager *_assetManager;
}

- (id)imageNamed:(id)a0;
- (id)initWithBundleURL:(id)a0;
- (id)_assetManager;
- (void).cxx_destruct;

@end
