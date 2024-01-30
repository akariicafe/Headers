@class PXPeopleSectionedDataSource, NSMutableDictionary, PXPeopleProgressManager, NSString, NSObject, PHPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PXPeopleAlbumProvider : NSObject <PXPeopleSectionedDataSourceChangeObserver, PXPhotoLibraryUIChangeObserver> {
    BOOL _didInitiateReCacheRequest;
    BOOL _didInitiatePeopleCountFetchRequest;
    BOOL _didPrepareDataSource;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) PXPeopleSectionedDataSource *peopleDataSource;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) PXPeopleProgressManager *progressMgr;
@property (copy, nonatomic) id /* block */ requestCompletion;
@property (nonatomic) long long cachedPeopleCount;
@property _Atomic int currentRequestId;
@property (retain) NSMutableDictionary *imageCache;
@property (readonly, nonatomic) BOOL isCountAvailable;
@property (readonly, nonatomic) long long peopleCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)a0;
- (id)peopleViewController;
- (void)dealloc;
- (void)_appWillEnterForeground;
- (void)_reCacheImagesCompletion:(id /* block */)a0;
- (void)requestAlbumImagesWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)_visiblePersons;
- (void)_updateCachedCountIfNeeded;
- (void)_handleRequestResult:(id)a0 forRequestID:(_Atomic int)a1 person:(id)a2 atIndex:(long long)a3 error:(id)a4 completion:(id /* block */)a5;
- (BOOL)_shouldShowInterstitialProgress;
- (void)_asyncAddImagesToCacheWithPersons:(id)a0 completion:(id /* block */)a1;
- (void)_invalidateCache;
- (void)imageCacheDidChanged:(id)a0;
- (void)_prepareIfNeeded;
- (void)peopleSectionedDataSource:(id)a0 didApplyIncrementalChanges:(id)a1;

@end
