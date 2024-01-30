@class PUDuplicateActionController;

@interface PUPhotoKitDuplicateActionPerformer : PUPhotoKitActionPerformer

@property (retain, nonatomic) PUDuplicateActionController *duplicateActionController;
@property (nonatomic) long long action;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } newStillImageTime;

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)performBackgroundTask;

@end
