@class PUDuplicateActionController;

@interface PUPXPhotoKitDuplicateAssetActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) PUDuplicateActionController *duplicateActionController;
@property (nonatomic) long long action;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageTime;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1 person:(id)a2;

- (void).cxx_destruct;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
