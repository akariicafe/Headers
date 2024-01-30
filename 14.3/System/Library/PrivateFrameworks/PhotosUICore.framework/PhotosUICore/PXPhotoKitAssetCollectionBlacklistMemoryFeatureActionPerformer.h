@class NSString;

@interface PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer : PXPhotoKitAssetCollectionActionPerformer

@property (retain, nonatomic) NSString *userResponse;

+ (id)createActivityWithTitle:(id)a0 actionType:(id)a1 actionSystemImageName:(id)a2;
+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)performUserInteractionTask;
- (void)performBackgroundTask;
- (void).cxx_destruct;
- (void)confirmBlacklistingUserAction:(id)a0 viewSpec:(id)a1;
- (unsigned long long)_memoryFeatureTypeFromActionType:(id)a0;
- (id)_memoryFeatureFromMemory:(id)a0 forActionType:(id)a1;
- (void)applyBlacklistFeatureWithActionType:(id)a0;

@end
