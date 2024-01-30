@class NSDictionary;

@interface VCPParallaxAnalyzer : NSObject {
    NSDictionary *_options;
}

- (void).cxx_destruct;
- (int)analyzeAsset:(id)a0 cancel:(id /* block */)a1 results:(id *)a2;
- (int)exportWallpaperForAsset:(id)a0 cancel:(id /* block */)a1 results:(id *)a2;
- (id)initWithOptions:(id)a0 andExistingResults:(id)a1;
- (int)upgradeWallPaperAtURL:(id)a0 toURL:(id)a1 cancel:(id /* block */)a2 results:(id *)a3;

@end
