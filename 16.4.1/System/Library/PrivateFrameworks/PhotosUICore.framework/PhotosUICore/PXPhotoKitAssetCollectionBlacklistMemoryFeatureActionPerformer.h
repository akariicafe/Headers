@class NSString, PXSuggestLessPeopleHelper;

@interface PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXSuggestLessPeopleHelperDelegate>

@property (retain, nonatomic) NSString *userResponse;
@property (nonatomic) BOOL isBlockingMemoryFeature;
@property (retain, nonatomic) PXSuggestLessPeopleHelper *suggestLessPeopleHelper;

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (id)_memoryFeatureFromMemory:(id)a0 forActionType:(id)a1;
- (unsigned long long)_memoryFeatureTypeFromActionType:(id)a0;
- (void)applyBlacklistFeatureWithActionType:(id)a0;
- (void)confirmBlacklistingUserAction:(id)a0 viewSpec:(id)a1;
- (void)performBackgroundTask;
- (BOOL)suggestLessPeopleHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)suggestLessPeopleHelper:(id)a0 presentViewController:(id)a1;
- (void)suggestLessPeopleInMemory:(id)a0;

@end
