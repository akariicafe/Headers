@class PHFetchResult, PXAssetReference, NSString, PXAssetsDataSource;
@protocol UIDragSession, UIDropSession;

@interface PXPhotoKitAssetCollectionAddPersonToAutoCounterActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXPhotoKitAssetCollectionActionPerformerInput>

@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, nonatomic) id<UIDropSession> dropSession;
@property (readonly, nonatomic) id<UIDragSession> dragSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isAllowed;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (void)_checkAndPreparePhotoLibrary:(id)a0 completionHandler:(id /* block */)a1;
- (void)_completeTaskWithViewController:(id)a0;
- (void)_optInAutoCounterWithPersonDictionary:(id)a0 photoLibraryURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)_promptForConsentWithCompletionHandler:(id /* block */)a0;
- (void)_promptForPersonAgeWithCompletionHandler:(id /* block */)a0;
- (void)_promptForPersonEthnicityWithCompletionHandler:(id /* block */)a0;
- (void)_promptForPersonGenderWithCompletionHandler:(id /* block */)a0;
- (BOOL)_promptIfMergeCandidatesForPerson:(id)a0;
- (void)_promptTaskFailedWithError:(id)a0;
- (void)_promptThankYouAndFinishTask;
- (void)_queryAutoCounterOptInStatusForPersonLocalIdentifier:(id)a0 photoLibraryURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)_runOptInForPerson:(id)a0;
- (BOOL)_shouldRunFaceProcessingForPhotoLibrary:(id)a0;

@end
