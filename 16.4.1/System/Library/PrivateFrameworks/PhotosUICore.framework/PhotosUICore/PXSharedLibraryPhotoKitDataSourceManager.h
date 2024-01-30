@class NSString, PHFetchResult, PHPhotoLibrary;

@interface PXSharedLibraryPhotoKitDataSourceManager : PXSharedLibraryDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    long long _type;
    PHFetchResult *_fetchResult;
}

@property (class, retain) PHPhotoLibrary *photoLibrary;
@property (class, readonly, copy) PXSharedLibraryPhotoKitDataSourceManager *invitationsDataSourceManager;
@property (class, readonly, copy) PXSharedLibraryPhotoKitDataSourceManager *previewDataSourceManager;
@property (class, readonly, copy) PXSharedLibraryPhotoKitDataSourceManager *sharedLibraryDataSourceManager;
@property (class, readonly, copy) PXSharedLibraryPhotoKitDataSourceManager *exitingDataSourceManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createInitialDataSource;
- (id)fetchExiting;
- (id)fetchSharedLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)initWithType:(long long)a0 fetchResult:(id)a1;
- (id)init;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (id)fetchPreview;
- (void).cxx_destruct;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;

@end
