@interface PXSharedLibraryMockDataSourceManager : PXSharedLibraryDataSourceManager {
    long long _type;
}

@property (class, readonly, copy) PXSharedLibraryMockDataSourceManager *invitationsDataSourceManager;
@property (class, readonly, copy) PXSharedLibraryMockDataSourceManager *ownerPreviewDataSourceManager;
@property (class, readonly, copy) PXSharedLibraryMockDataSourceManager *participantPreviewDataSourceManager;
@property (class, readonly, copy) PXSharedLibraryMockDataSourceManager *ownerSharedLibraryDataSourceManager;
@property (class, readonly, copy) PXSharedLibraryMockDataSourceManager *participantSharedLibraryDataSourceManager;
@property (class, readonly, copy) PXSharedLibraryMockDataSourceManager *ownerExitingDataSourceManager;
@property (class, readonly, copy) PXSharedLibraryMockDataSourceManager *participantExitingDataSourceManager;

+ (id)_sharedLibraryMockWithType:(long long)a0;

- (id)createInitialDataSource;
- (id)fetchExiting;
- (id)fetchSharedLibrary;
- (id)init;
- (id)fetchPreview;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDataSourceType:(long long)a0;

@end
