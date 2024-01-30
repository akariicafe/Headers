@class NSArray, PXSampleInboxMediaProvider, NSString;
@protocol PXInboxModelDetailViewControllerProvider, PXInboxModelTitleProvider, PXInboxModelMediaProvider;

@interface PXSampleInboxDataSourceManager : PXInboxModelDataSourceManager <PXInboxProviderSource, PXInboxModelTitleProvider>

@property (retain, nonatomic) NSArray *mockedModels;
@property (retain, nonatomic) PXSampleInboxMediaProvider *sampleMediaProvider;
@property (readonly, nonatomic) id<PXInboxModelDetailViewControllerProvider> detailViewControllerProvider;
@property (readonly, nonatomic) id<PXInboxModelMediaProvider> mediaProvider;
@property (readonly, nonatomic) id<PXInboxModelTitleProvider> titleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateDataSource;
- (id)init;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)requestTitleAndSubtitleForModel:(id)a0 completion:(id /* block */)a1;
- (void)_generateModels;
- (id)_modelElements;
- (void)_changeData;
- (id)providerSource;
- (id)titleForModel:(id)a0;
- (id)subtitleForModel:(id)a0;
- (id)_dataSourceSnapshot;

@end
