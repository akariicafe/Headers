@class PXSharedLibraryDataSource;

@interface PXSharedLibraryDataSourceManager : PXSectionedDataSourceManager

@property (readonly, nonatomic) PXSharedLibraryDataSource *dataSource;

+ (id)currentPreviewDataSourceManager;
+ (id)currentExitingDataSourceManager;
+ (id)currentInvitationsDataSourceManager;
+ (id)currentSharedLibraryDataSourceManager;
+ (id)exitingDataSourceManagerForType:(long long)a0;
+ (id)invitationsDataSourceManagerForType:(long long)a0;
+ (id)keyPathsAffectingCurrentExitingDataSourceManager;
+ (id)keyPathsAffectingCurrentInvitationsDataSourceManager;
+ (id)keyPathsAffectingCurrentPreviewDataSourceManager;
+ (id)keyPathsAffectingCurrentSharedLibraryDataSourceManager;
+ (id)previewDataSourceManagerForType:(long long)a0;
+ (id)sharedLibraryDataSourceManagerForType:(long long)a0;

- (id)fetchExiting;
- (id)fetchSharedLibrary;
- (id)fetchPreview;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;

@end
