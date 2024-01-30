@class NSString, AVTAvatarPose;

@interface AVTRenderingScope : NSObject

@property (readonly, nonatomic) NSString *framingMode;
@property (readonly, nonatomic) float sizeModifier;
@property (readonly, nonatomic) long long renderingType;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) AVTAvatarPose *pose;

+ (id)gridThumbnailScope;
+ (id)largeThumbnailScope;
+ (unsigned long long)scopeOptionsForEnvironment:(id)a0;
+ (id)listControllerThumbnailScope;
+ (id)funCamCarouselThumbnailScope;
+ (double)extraMagnifyingFactorForFramingMode:(id)a0;
+ (double)widthForRenderingType:(long long)a0 options:(unsigned long long)a1;
+ (double)thumbnailHeightRatioForFramingMode:(id)a0;
+ (id)thumbnailScope;
+ (id)simplePickerThumbnailScope;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithRenderingType:(long long)a0 scale:(double)a1;
- (id)initWithRenderingType:(long long)a0 scale:(double)a1 options:(unsigned long long)a2 framingMode:(id)a3 pose:(id)a4;
- (id)copyWithFramingMode:(id)a0;
- (id)copyApplyingPoseOverride:(id)a0;
- (id)cacheableResourceAssociatedIdentifier;
- (unsigned long long)cacheableResourceAssociatedCost;
- (id)adaptedFramingModeForObjectType:(long long)a0;
- (id)framingModeIdentifier;
- (id)initWithRenderingType:(long long)a0 scale:(double)a1 options:(unsigned long long)a2;
- (id)initWithRenderingType:(long long)a0 scale:(double)a1 options:(unsigned long long)a2 framingMode:(id)a3 pose:(id)a4 sizeModifier:(float)a5;
- (id)copyWithPose:(id)a0;
- (id)copyWithSizeModifier:(float)a0;

@end
