@class UIColor, NSString, CAShapeLayer, _MKPuckAnnotationView, UITraitCollection;

@interface MKUserLocationHeadingConeLayer : CAGradientLayer <MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator> {
    _MKPuckAnnotationView *_userLocationView;
    CAShapeLayer *_maskLayer;
    double _headingAccuracy;
    BOOL _shouldMatchAccuracyRadius;
    UIColor *_tintColor;
    double _halfMinAngle;
    double _lastAccuracyRadius;
}

@property (nonatomic) double minimumAccuracyRadius;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) unsigned long long mapType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_opacityForAccuracy:(double)a0 locationAccuracy:(double)a1;
- (void)_updateShowHeadingForAccuracy:(double)a0;
- (void).cxx_destruct;
- (void)setAccuracyRadius:(double)a0 duration:(double)a1;
- (void)_createMaskLayer;
- (void)_animateToOpacity:(double)a0 completion:(id /* block */)a1;
- (id)_colorsForAccuracyRadius:(double)a0;
- (void)animateToSetVisible:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateHeadingAccuracy:(double)a0 previousAccuracy:(double)a1;
- (BOOL)_shouldShowHeadingForAccuracy:(double)a0;
- (void)updateHeading:(double)a0;
- (id)initWithUserLocationView:(id)a0 shouldMatchAccuracyRadius:(BOOL)a1 minimumPresentationAngle:(double)a2;
- (void)_updateColors;
- (id)_accuracyGradientLocationsForAccuracyRadius:(double)a0;
- (void)_updateHeadingMaskForAccuracy:(double)a0 previousAccuracy:(double)a1;
- (void)updateTintColor:(id)a0;

@end
