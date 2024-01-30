@class NSString;

@interface PXSharedLibrarySourceLibraryInfoMock : NSObject <PXSharedLibrarySourceLibraryInfo>

@property (readonly, nonatomic) BOOL isSystemPhotoLibrary;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryEnabled;
@property (readonly, nonatomic) BOOL isCloudPhotoLibraryInitialSyncCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pickerConfiguration;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })assetsCountsForAssetLocalIdentifiers:(id)a0;
- (id)createDataSourceManager;
- (void)createPreviewWithEmailAddresses:(id)a0 phoneNumbers:(id)a1 autoSharePolicy:(long long)a2 startDate:(id)a3 personUUIDs:(id)a4 progress:(id)a5 presentationEnvironment:(id)a6 withCompletionHandler:(id /* block */)a7;
- (void)createSharedLibraryWithEmailAddresses:(id)a0 phoneNumbers:(id)a1 autoSharePolicy:(long long)a2 startDate:(id)a3 personUUIDs:(id)a4 progress:(id)a5 presentationEnvironment:(id)a6 withCompletionHandler:(id /* block */)a7;
- (void)fetchEstimatedAssetsCountsForExit:(BOOL)a0 imageCount:(unsigned long long *)a1 videoCount:(unsigned long long *)a2 audioCount:(unsigned long long *)a3 itemCount:(unsigned long long *)a4;
- (void)fetchEstimatedAssetsCountsForStartDate:(id)a0 personUUIDs:(id)a1 completion:(id /* block */)a2;
- (void)fetchEstimatedAssetsCountsShareEverythingPolicyWithCompletion:(id /* block */)a0;
- (void)fetchSuggestedStartDateForPersonUUIDs:(id)a0 completion:(id /* block */)a1;
- (BOOL)isFailedToURLFetchOwnedSharedLibraryError:(id)a0;
- (BOOL)isSharedLibraryNotFoundError:(id)a0;
- (BOOL)presentCustomInformationForError:(id)a0 customTitle:(id *)a1 customMessage:(id *)a2;

@end
