@interface PHAssetCreationAdjustmentBakeInOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldBakeInIfLivePhotoPlaybackDisabled;
@property (nonatomic) BOOL shouldBakeInIfLivePhotoMuted;
@property (nonatomic) BOOL shouldBakeInIfAdjustedByThirdParty;
@property (nonatomic) BOOL shouldBakeInIfCropped;
@property (nonatomic) BOOL shouldBakeInIfTimelineTrimmed;
@property (nonatomic) BOOL shouldBakeInIfPortraitDepthEffectEnabled;
@property (nonatomic) BOOL shouldBakeInIfContainsPenultimateResources;
@property (nonatomic) BOOL flattenLivePhotoToStillIfNeeded;

+ (id)adjustmentBakeInOptionsForPublishingOriginals;

- (void)encodeToXPCDict:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithXPCDict:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)plRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
