@class UIColor, CAGradientLayer, NSArray, CALayer, UITraitCollection;

@interface _MKPuckAccuracyLayer : CALayer {
    BOOL _externallyHidden;
    BOOL _internallyHidden;
    BOOL _shouldShowAnimationsIfAvailable;
    UIColor *_fullOpacityFillColor;
    double _baseOpacity;
    double _additionalOpacityMultiplier;
    UIColor *_fullOpacityStrokeColor;
    double _baseStrokeOpacity;
    double _additionalStrokeOpacityMultiplier;
    BOOL _useDarkAppearance;
    CALayer *_ring;
    CAGradientLayer *_faux3DHighlight;
    CALayer *_faux3DHighlightMask;
    NSArray *_faux3DHighlightMaskRings;
    CALayer *_faux3DShadow;
}

@property (nonatomic, getter=isFaux3DEnabled) BOOL faux3DEnabled;
@property (nonatomic) double minimumRadius;
@property (nonatomic) unsigned long long mapType;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic, getter=isStale) BOOL stale;
@property (readonly, nonatomic) double currentAccuracy;
@property (readonly, nonatomic) double accuracy;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } significantBounds;
@property (readonly, nonatomic) double presentationFillOpacity;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) double mapPitchRadians;
@property (nonatomic) double mapCameraDistance;

- (void)_updateColors;
- (void)stopAnimations;
- (void)setStrokeOpacity:(double)a0 duration:(double)a1;
- (void)_updateFaux3DRingsIfNecessary;
- (void)updateLegacyConfiguration;
- (void)setAccuracy:(double)a0 duration:(double)a1;
- (void)setHidden:(BOOL)a0;
- (void)setFillOpacity:(double)a0 duration:(double)a1;
- (void)startAnimationsIfNecessary;
- (id)init;
- (void)_createFaux3DRings;
- (void).cxx_destruct;

@end
