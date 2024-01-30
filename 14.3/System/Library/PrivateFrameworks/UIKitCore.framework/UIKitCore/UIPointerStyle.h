@class UIPointerShape, UIPointerEffect, UITargetedPreview;

@interface UIPointerStyle : NSObject <NSCopying> {
    BOOL _determineScaleAutomatically;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long constrainedAxes;
@property (readonly, nonatomic) UITargetedPreview *targetedPreview;
@property (retain, nonatomic) UIPointerEffect *effect;
@property (retain, nonatomic) UIPointerShape *pointerShape;
@property (readonly, nonatomic) double contentScale;
@property (readonly, nonatomic) BOOL pointerUnderlapsContent;
@property (nonatomic) BOOL _suppressesMirroring;

+ (id)hiddenPointerStyle;
+ (id)styleWithShape:(id)a0 constrainedAxes:(unsigned long long)a1;
+ (id)_systemPointerStyle;
+ (id)styleWithEffect:(id)a0 shape:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })_contentSlipMappedToRegionSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_pointerSlipMappedToRegionSize:(struct CGSize { double x0; double x1; })a0;
- (double)_pointerIntensityForMaterialLuminance:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct CGPoint { double x0; double x1; })_pointerSlipFactor;
- (struct CGPoint { double x0; double x1; })_contentSlipFactor;
- (BOOL)_canTransitionInPlaceToStyle:(id)a0;

@end
