@class UIColor, UITraitCollection;

@interface _MKPuckAccuracyLayer : CALayer {
    BOOL _externallyHidden;
    BOOL _internallyHidden;
    BOOL _shouldShowAnimationsIfAvailable;
    UIColor *_fullOpacityFillColor;
    double _baseOpacity;
    double _additionalOpacityMultiplier;
}

@property (nonatomic) double minimumRadius;
@property (nonatomic) unsigned long long mapType;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic, getter=isStale) BOOL stale;
@property (readonly, nonatomic) double presentationFillOpacity;
@property (retain, nonatomic) UITraitCollection *traitCollection;

- (void)setFillOpacity:(double)a0 duration:(double)a1;
- (void)updateLegacyConfiguration;
- (void)stopAnimations;
- (id)init;
- (void).cxx_destruct;
- (void)setAccuracy:(double)a0 duration:(double)a1;
- (void)setHidden:(BOOL)a0;
- (void)_updateColors;
- (void)startAnimationsIfNecessary;

@end
