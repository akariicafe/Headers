@class UITraitCollection, NSString, _MKPuckAnnotationView;

@interface MKUserLocationHeadingArrowLayer : CAShapeLayer <MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator> {
    double _maxUncertaintyAngleToShowArrow;
    double _baseRadius;
    double _tipRadius;
    double _baseHalfAngle;
}

@property (readonly, weak, nonatomic) _MKPuckAnnotationView *userLocationView;
@property (nonatomic) double headingRadians;
@property (nonatomic) double minimumAccuracyRadius;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) unsigned long long mapType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setAccuracyRadius:(double)a0 duration:(double)a1;
- (struct CGPoint { double x0; double x1; })_positionWhenVisible:(BOOL)a0;
- (struct CGPath { } *)_pathWhenVisible:(BOOL)a0;
- (BOOL)_shouldBeVisibleForAccuracy:(double)a0;
- (id)_animationToSetVisible:(BOOL)a0;
- (double)_baseRadiusWhenVisible:(BOOL)a0;
- (double)_tipRadiusWhenVisible:(BOOL)a0;
- (id)_bezierPathWithBaseRadius:(double)a0 tipRadius:(double)a1 baseHalfAngle:(double)a2;
- (id)initWithUserLocationView:(id)a0;
- (void)animateToSetVisible:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateHeadingAccuracy:(double)a0 previousAccuracy:(double)a1;
- (void)updateHeading:(double)a0;
- (void)updateTintColor:(id)a0;

@end
