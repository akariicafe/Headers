@class UIColor, NSString, UIImage, UIView, _MKKVOProxy, _MKUserLocationViewImageProvider;

@interface _MKUserLocationView : _MKPuckAnnotationView <_MKBalloonCalloutViewConfiguring, _MKKVOProxyDelegate> {
    double _externalMaxAccuracyRadius;
    BOOL _radiusBasedAccuracyOpacity;
    BOOL _hasExplicitCalloutStyle;
    _MKUserLocationViewImageProvider *_imageProvider;
    UIImage *_balloonImage;
    UIColor *_balloonImageTintColor;
    _MKKVOProxy *_kvoProxy;
}

@property (nonatomic, getter=_showingPreciseAuthorizedLocation, setter=_setShowingPreciseAuthorizedLocation:) BOOL showingPreciseAuthorizedLocation;
@property (readonly, nonatomic, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
@property (readonly, nonatomic, getter=_balloonTintColor) UIColor *balloonTintColor;
@property (readonly, nonatomic, getter=_balloonStrokeColor) UIColor *balloonStrokeColor;
@property (readonly, nonatomic, getter=_balloonImage) UIImage *balloonImage;
@property (readonly, nonatomic, getter=_balloonContentView) UIView *balloonContentView;
@property (readonly, nonatomic, getter=_balloonInnerStrokeColor) UIColor *balloonInnerStrokeColor;
@property (readonly, nonatomic, getter=_balloonImageTintColor) UIColor *balloonImageTintColor;
@property (readonly, nonatomic, getter=_balloonCalloutShouldShowArrow) BOOL balloonCalloutShouldShowArrow;
@property (readonly, nonatomic, getter=_balloonCalloutShouldCenterWhenOffscreen) BOOL balloonCalloutShouldCenterWhenOffscreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)_innerPulseFrameWhenDisabled:(unsigned long long)a0;
- (void)_setBalloonImage:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setMaxRadiusToShowAccuracyRing:(double)a0;
- (void)setDetailCalloutAccessoryView:(id)a0;
- (void)_showCallout:(BOOL)a0;
- (void)setAnnotation:(id)a0;
- (void)dealloc;
- (void)_mkObserveValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setCalloutStyle:(long long)a0;
- (void)_setBalloonImageTintColor:(id)a0;
- (void)_updateCalloutStyle;
- (BOOL)shouldShowCallout;
- (void)layoutSubviews;
- (void)_dismissCallout:(BOOL)a0;
- (void)_stopObservingAnnotation;
- (void)_updateLegacyConfiguration;
- (void)setLeftCalloutAccessoryView:(id)a0;
- (void)_startObservingAnnotation;
- (BOOL)_allowedToShowCallout;
- (void)_updateMaxRadiusToShowAccuracyRing;
- (void)setRightCalloutAccessoryView:(id)a0;
- (void)_updateCalloutOffset;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
