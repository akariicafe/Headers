@class PHPhotoLibrary;

@interface PGCurator_PHAsset : PGCurator {
    PHPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)bestAssetsForFeeder:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
- (id)newSemanticalDeduperWithOptions:(id)a0;
- (id)newMovieDeduperWithOptions:(id)a0;
- (void)lastPassToCompleteItems:(id)a0 fromFeeder:(id)a1 options:(id)a2 maximumNumberOfItems:(unsigned long long)a3 debugInfo:(id)a4;
- (void)addMoviesToAssets:(id)a0 fromFeeder:(id)a1 maximumNumberOfAssets:(unsigned long long)a2 debugInfo:(id)a3;

@end
