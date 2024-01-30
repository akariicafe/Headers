@class PXSuggestionsDataSourceManager, NSString, PXSuggestionsDataSource, PXForYouSuggestionsAssetsDataSource, NSDictionary, PXPhotosDataSource;

@interface PXForYouSuggestionAssetsDataSourceManager : PXAssetsDataSourceManager <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver>

@property (readonly, nonatomic) PXSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (retain, nonatomic) PXSuggestionsDataSource *suggestionsDataSource;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic) PXForYouSuggestionsAssetsDataSource *dataSource;
@property (readonly, nonatomic) NSDictionary *snapshotAssetToSuggestionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createInitialDataSource;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (id)initWithSuggestionsDataSourceManager:(id)a0;

@end
