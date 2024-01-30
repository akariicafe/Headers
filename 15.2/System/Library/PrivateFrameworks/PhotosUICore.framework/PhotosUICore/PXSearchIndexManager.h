@class NSTimer, PFSceneTaxonomy, PLSearchMetadataStore, PHPhotoLibrary, PSIDatabase;

@interface PXSearchIndexManager : NSObject

@property (readonly, nonatomic) PLSearchMetadataStore *searchMetadataStore;
@property (retain, nonatomic) NSTimer *searchIndexStatusTimer;
@property (retain, nonatomic) PFSceneTaxonomy *sceneTaxonomy;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PSIDatabase *searchIndex;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (void)stopMonitoringSearchIndexStatus;
- (void)_openSearchIndexWithCompletion:(id /* block */)a0;
- (void)startMonitoringSearchIndexStatus;

@end
