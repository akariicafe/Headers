@class PHFetchResult, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PXSiriVocabularyController : NSObject <PHPhotoLibraryChangeObserver>

@property (class, readonly) PXSiriVocabularyController *sharedManager;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic) BOOL needsAlbumsVocabularyUpdate;
@property (nonatomic) BOOL needsPeopleVocabularyUpdate;
@property (retain, nonatomic) PHFetchResult *albumFetchResult;
@property (retain, nonatomic) PHFetchResult *peopleFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateVocabulary;
- (void)dealloc;
- (void)_onQueueUpdatePeopleVocabulary;
- (void)_onQueueUpdateAlbumVocabulary;
- (id)_localizedTitlesForAssetCollectionFetchResult:(id)a0;

@end
