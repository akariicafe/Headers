@class PHPhotoLibrary;

@interface PGKeyCurator_PHAsset : PGKeyCurator {
    PHPhotoLibrary *_photoLibrary;
}

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)keyAssetWithFeeder:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (id)keyAssetInAssets:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;

@end
