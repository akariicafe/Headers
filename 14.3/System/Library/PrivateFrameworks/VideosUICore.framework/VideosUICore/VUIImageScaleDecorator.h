@class UIColor;

@interface VUIImageScaleDecorator : VUIImageDecorator

@property (nonatomic) struct CGSize { double width; double height; } scaleToSize;
@property (nonatomic) long long scaleMode;
@property (nonatomic) BOOL centerGrowth;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct _VUICornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } cornerRadii;
@property (nonatomic) BOOL cornerContinuous;
@property (copy, nonatomic) UIColor *bgColor;
@property (nonatomic) BOOL preservesAlpha;
@property (nonatomic) BOOL cropToFit;
@property (nonatomic) double upscaleAdjustment;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithScaleToSize:(struct CGSize { double x0; double x1; })a0;
- (id)decoratorIdentifier;
- (BOOL)needsAlphaForImage:(id)a0;
- (id)initWithScaleToSize:(struct CGSize { double x0; double x1; })a0 scaleMode:(long long)a1;
- (struct CGSize { double x0; double x1; })loaderScaleToSize;
- (struct CGSize { double x0; double x1; })expectedSize;
- (struct CGSize { double x0; double x1; })_scaleToSizeAdjustedForUpscaling;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_paddingAdjustedForUpscaling;
- (void)_applyCornerMaskForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toContext:(struct CGContext { } *)a1;
- (id)_imageFixedForRotation:(id)a0;
- (double)_focusedSizeIncreaseFactor;
- (id)initWithScaleToSize:(struct CGSize { double x0; double x1; })a0 cropToFit:(BOOL)a1;
- (BOOL)loaderCropToFit;
- (id)decorate:(id)a0 scaledWithSize:(struct CGSize { double x0; double x1; })a1 croppedToFit:(BOOL)a2;

@end
