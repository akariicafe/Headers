@class UIColor, UIBlurEffect, NSString, UIImage, UIView, _MKKVOProxy, _MKUserLocationViewImageProvider;

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
@property (readonly, nonatomic, getter=_balloonMaterial) UIBlurEffect *balloonMaterial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAnnotation:(id)a0;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setMaxRadiusToShowAccuracyRing:(double)a0;
- (BOOL)_allowedToShowCallout;
- (void)_dismissCallout:(BOOL)a0;
- (unsigned long long)_innerPulseFrameWhenDisabled:(unsigned long long)a0;
- (void)_mkObserveValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setBalloonImage:(id)a0;
- (void)_setBalloonImageTintColor:(id)a0;
- (void)_setCalloutStyle:(long long)a0;
- (void)_showCallout:(BOOL)a0;
- (void)_startObservingAnnotation;
- (void)_stopObservingAnnotation;
- (void)_updateCalloutOffset;
- (void)_updateCalloutStyle;
- (void)_updateLegacyConfiguration;
- (void)_updateMaxRadiusToShowAccuracyRing;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)setDetailCalloutAccessoryView:(id)a0;
- (void)setLeftCalloutAccessoryView:(id)a0;
- (void)setRightCalloutAccessoryView:(id)a0;
- (BOOL)shouldShowCallout;

@end
