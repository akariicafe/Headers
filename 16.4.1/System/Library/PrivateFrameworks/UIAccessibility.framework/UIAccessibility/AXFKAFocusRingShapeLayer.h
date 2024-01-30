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

- (id)tintColor;
- (void)setPath:(struct CGPath { } *)a0;
- (void)updateAppearance;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateBottomLayerPath;
- (double)borderScale;
- (id)bottomFocusRingColorForTintColor:(id)a0;
- (id)fillColorForBottomLayer;
- (double)insetForFocusRingBorder:(id)a0;
- (double)lineWidthForBottomLayer;
- (struct CGColor { } *)strokeColorForBottomLayer;

@end
