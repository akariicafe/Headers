@interface PLManagedAssetCMMAdjustmentBakeInOptions : NSObject

@property (nonatomic) BOOL shouldBakeInIfLivePhotoPlaybackDisabled;
@property (nonatomic) BOOL shouldBakeInIfLivePhotoMuted;
@property (nonatomic) BOOL shouldBakeInIfAdjustedByThirdParty;
@property (nonatomic) BOOL shouldBakeInIfCropped;
@property (nonatomic) BOOL shouldBakeInIfTimelineTrimmed;
@property (nonatomic) BOOL shouldBakeInIfPortraitDepthEffectEnabled;
@property (nonatomic) BOOL shouldBakeInIfContainsPenultimateResources;
@property (nonatomic) BOOL flattenLivePhotoToStillIfNeeded;

@end
