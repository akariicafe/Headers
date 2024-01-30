@class PHPhotoLibrary;

@interface PGKeyCurator_PHAsset : PGKeyCurator {
    PHPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 curationCriteriaFactory:(id)a1;
- (id)keyAssetInAssets:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;
- (id)keyAssetWithFeeder:(id)a0 options:(id)a1 criteria:(id)a2 debugInfo:(id)a3 progressBlock:(id /* block */)a4;

@end
