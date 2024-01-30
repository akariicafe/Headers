@class NSString, NSDictionary, PXAssetsDataSourceManager, AEProgressViewModelSnapshot;

@interface AEProgressViewModel : PXObservable <PXAssetsDataSourceManagerObserver> {
    AEProgressViewModelSnapshot *_currentSnapshot;
}

@property (readonly, nonatomic) PXAssetsDataSourceManager *_dataSourceManager;
@property (retain, nonatomic, setter=_setProgressByAsset:) NSDictionary *_progressByAsset;
@property (readonly, nonatomic) AEProgressViewModelSnapshot *progressSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableChangeObject;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (id)initWithDataSourceManager:(id)a0;
- (id)_createSnapshot;
- (void)setProgress:(id)a0 forAssetReference:(id)a1;
- (void)cancelProgressForAssetUUIDs:(id)a0;

@end
