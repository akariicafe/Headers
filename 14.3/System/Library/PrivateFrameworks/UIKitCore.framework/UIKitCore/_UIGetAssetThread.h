@class ALAsset, NSURL, NSCondition, ALAssetsLibrary;

@interface _UIGetAssetThread : NSThread {
    NSURL *_url;
    ALAssetsLibrary *_library;
}

@property (retain) NSCondition *condition;
@property (retain) ALAsset *asset;

- (void).cxx_destruct;
- (void)main;
- (id)initWithURL:(id)a0 assetsLibrary:(id)a1;

@end
