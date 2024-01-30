@class PXSuggestionsDataSourceManager, NSString, PXSuggestionsDataSource, PXForYouSuggestionsAssetsDataSource, NSDictionary, PXPhotosDataSource;
@protocol PXDisplaySuggestion;

@interface PXForYouSuggestionAssetsDataSourceManager : PXAssetsDataSourceManager <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver>

@property (readonly, nonatomic) PXSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (retain, nonatomic) PXSuggestionsDataSource *suggestionsDataSource;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;
@property (retain, nonatomic) id<PXDisplaySuggestion> displayOriginalSuggestion;
@property (readonly, nonatomic) PXForYouSuggestionsAssetsDataSource *dataSource;
@property (readonly, nonatomic) NSDictionary *snapshotAssetToSuggestionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithSuggestionsDataSourceManager:(id)a0;

@end
