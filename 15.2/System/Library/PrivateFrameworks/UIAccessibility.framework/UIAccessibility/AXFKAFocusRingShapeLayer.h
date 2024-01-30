@class AXFKAFocusRingBorderShapeLayer;

@interface AXFKAFocusRingShapeLayer : CAShapeLayer

@property (retain, nonatomic) AXFKAFocusRingBorderShapeLayer *bottomBorderLayer;
@property (readonly, nonatomic) struct CGColor { } *ringColorRef;
@property (readonly, nonatomic) BOOL useLargeRing;
@property (readonly, nonatomic) BOOL increaseContrast;
@property (readonly, nonatomic) BOOL useDefaultRingColor;
@property (nonatomic) unsigned long long kind;
@property (nonatomic) long long interfaceStyle;

+ (id)focusLayerForUserInterfaceStyle:(long long)a0;
+ (id)parentLayerForUserInterfaceStyle:(long long)a0;
+ (id)selectedLayerForUserInterfaceStyle:(long long)a0;
+ (id)selectedParentLayerForUserInterfaceStyle:(long long)a0;
+ (id)layerWithStyle:(long long)a0 kind:(unsigned long long)a1;

- (void)setPath:(struct CGPath { } *)a0;
- (id)tintColor;
- (void)updateAppearance;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (double)borderScale;
- (double)insetForFocusRingBorder:(id)a0;
- (void)_updateBottomLayerPath;
- (struct CGColor { } *)strokeColorForBottomLayer;
- (double)lineWidthForBottomLayer;
- (id)fillColorForBottomLayer;
- (id)bottomFocusRingColorForTintColor:(id)a0;

@end
