@interface NTKAnalogHandConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } anchorPoint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double handLength;
@property (nonatomic) double handWidth;
@property (nonatomic) double pegRadius;
@property (nonatomic) double pegStrokeWidth;
@property (nonatomic) double smoothingRadius;
@property (nonatomic) double inlayInsetRadius;
@property (nonatomic) double armLength;
@property (nonatomic) double armWidth;
@property (nonatomic) BOOL excludePeg;
@property (nonatomic) double tailLength;
@property (nonatomic) double dropShadowRadius;
@property (nonatomic) double dropShadowOpacity;
@property (nonatomic) double radialShadowRadius;
@property (nonatomic) double radialShadowOpacity;
@property (nonatomic) struct CGSize { double width; double height; } directionalShadowOffset;
@property (nonatomic) BOOL roundedSecondHand;
@property (nonatomic) BOOL excludeSecondTail;

+ (id)defaultHourConfigurationForDevice:(id)a0;
+ (id)defaultMinuteConfigurationForDevice:(id)a0;
+ (id)defaultSecondConfigurationForDevice:(id)a0;
+ (id)defaultSubdialConfigurationForDevice:(id)a0;

- (BOOL)isEqualToConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)handCacheIdentifier;
- (id)dropShadowCacheIdentifier;
- (id)radialShadowCacheIdentifier;
- (id)configurationByApplyingInset:(double)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inlayInsets;
- (void)copyToConfiguration:(id)a0;
- (id)configurationByApplyingScale:(double)a0;

@end
