@class NSTimer, PLSearchMetadataStore, PHPhotoLibrary, PSIDatabase;

@interface PXSearchIndexManager : NSObject

@property (readonly, nonatomic) PLSearchMetadataStore *searchMetadataStore;
@property (retain, nonatomic) NSTimer *searchIndexStatusTimer;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PSIDatabase *searchIndex;

- (id)initWithPhotoLibrary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)stopMonitoringSearchIndexStatus;
- (void)_openSearchIndexWithCompletion:(id /* block */)a0;
- (void)startMonitoringSearchIndexStatus;

@end
