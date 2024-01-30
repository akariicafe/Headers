@class NSTimer, PLSearchIndexSceneTaxonomyProvider, PLSearchMetadataStore, PHPhotoLibrary, PSIDatabase;

@interface PXSearchIndexManager : NSObject

@property (readonly, nonatomic) PLSearchMetadataStore *searchMetadataStore;
@property (retain, nonatomic) NSTimer *searchIndexStatusTimer;
@property (retain, nonatomic) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PSIDatabase *searchIndex;

- (id)initWithPhotoLibrary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_openSearchIndexWithCompletion:(id /* block */)a0;
- (void)stopMonitoringSearchIndexStatus;
- (void)startMonitoringSearchIndexStatus;

@end
