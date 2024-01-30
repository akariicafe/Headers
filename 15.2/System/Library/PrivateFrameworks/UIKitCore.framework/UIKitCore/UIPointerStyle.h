@class UIPointerEffect, NSArray, NSString, UIPointerShape, UITargetedPreview;

@interface UIPointerStyle : NSObject <_UIContentEffectDescriptor, NSCopying> {
    BOOL _determineScaleAutomatically;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long constrainedAxes;
@property (retain, nonatomic) UIPointerEffect *effect;
@property (retain, nonatomic) UIPointerShape *pointerShape;
@property (readonly, nonatomic) double contentScale;
@property (readonly, nonatomic) BOOL pointerUnderlapsContent;
@property (nonatomic) BOOL _suppressesMirroring;
@property (copy, nonatomic) NSArray *accessories;
@property (readonly, nonatomic) UITargetedPreview *targetedPreview;
@property (readonly, nonatomic) NSArray *compatibleDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)systemPointerStyle;
+ (id)styleWithShape:(id)a0 constrainedAxes:(unsigned long long)a1;
+ (id)_systemPointerStyle;
+ (id)styleWithEffect:(id)a0 shape:(id)a1;
+ (id)hiddenPointerStyle;

- (struct CGPoint { double x0; double x1; })_pointerSlipFactor;
- (struct CGPoint { double x0; double x1; })_contentSlipFactor;
- (BOOL)canTransitionInPlaceToEffectWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })_contentSlipMappedToRegionSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_pointerSlipMappedToRegionSize:(struct CGSize { double x0; double x1; })a0;
- (double)_pointerIntensityForMaterialLuminance:(unsigned long long)a0;

@end
