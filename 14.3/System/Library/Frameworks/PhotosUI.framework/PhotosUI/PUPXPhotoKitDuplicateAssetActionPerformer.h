@class PUDuplicateActionController;

@interface PUPXPhotoKitDuplicateAssetActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) PUDuplicateActionController *duplicateActionController;
@property (nonatomic) long long action;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageTime;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;

- (void)performUserInteractionTask;
- (void)performBackgroundTask;
- (void).cxx_destruct;

@end
