@class NSArray, NSString, PHPhotoLibrary, PXImportSourcesManager;

@interface PXImportSourceDataSectionManager : PXDataSectionManager <PXImportSourcesManagerChangeObserver>

@property (readonly, nonatomic) PXImportSourcesManager *importSourcesManager;
@property (retain, nonatomic) NSArray *importSources;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)createDataSection;
- (id)auxiliaryObjectForKey:(id)a0 dataSectionObject:(id)a1 hintIndex:(long long)a2;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithChildDataSectionManagers:(id)a0;
- (void)importSourcesManager:(id)a0 didUpdateImportSource:(id)a1;

@end
