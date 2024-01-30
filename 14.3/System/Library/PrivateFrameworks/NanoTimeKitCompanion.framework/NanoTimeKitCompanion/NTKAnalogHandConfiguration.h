@interface NTKAnalogHandConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long type;
@property (nonatomic) double handLength;
@property (nonatomic) double handWidth;
@property (nonatomic) double pegRadius;
@property (nonatomic) double pegStrokeWidth;
@property (nonatomic) double inlayInsetRadius;
@property (nonatomic) double armLength;
@property (nonatomic) double armWidth;
@property (nonatomic) double tailLength;
@property (nonatomic) double dropShadowRadius;
@property (nonatomic) double dropShadowOpacity;
@property (nonatomic) double radialShadowRadius;
@property (nonatomic) double radialShadowOpacity;
@property (nonatomic) struct CGSize { double width; double height; } directionalShadowOffset;

+ (id)defaultHourConfigurationForDevice:(id)a0;
+ (id)defaultMinuteConfigurationForDevice:(id)a0;
+ (id)defaultSecondConfigurationForDevice:(id)a0;

- (struct CGPoint { double x0; double x1; })anchorPoint;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToConfiguration:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)handCacheIdentifier;
- (id)dropShadowCacheIdentifier;
- (id)radialShadowCacheIdentifier;
- (id)configurationByApplyingInset:(double)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inlayInsets;
- (void)copyToConfiguration:(id)a0;
- (id)configurationByApplyingScale:(double)a0;

@end
