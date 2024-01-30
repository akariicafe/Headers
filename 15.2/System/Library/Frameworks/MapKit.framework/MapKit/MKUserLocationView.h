@class _MKUserLocationView;

@interface MKUserLocationView : MKAnnotationView {
    BOOL _selected;
}

@property (retain, nonatomic, getter=_mkUserLocationView, setter=_setMKUserLocationView:) _MKUserLocationView *mkUserLocationView;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_annotationTrackingInsets;
- (void)_setMapDisplayStyle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; BOOL x4; })a0;
- (void)_setMapType:(unsigned long long)a0;
- (void)setRightCalloutAccessoryView:(id)a0;
- (BOOL)_allowedToShowCallout;
- (void)_setMapPitchRadians:(double)a0;
- (void)_updateFromMap;
- (void)setLeftCalloutAccessoryView:(id)a0;
- (void)prepareForDisplay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mapkit_visibleRect;
- (void)_setMapRotationRadians:(double)a0;
- (void)setAnnotation:(id)a0;
- (float)_selectionPriority;
- (BOOL)isDraggable;
- (void)setDetailCalloutAccessoryView:(id)a0;
- (void)setLeftCalloutOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setRightCalloutOffset:(struct CGPoint { double x0; double x1; })a0;
- (double)_heading;
- (BOOL)_isStale;
- (struct CGPoint { double x0; double x1; })centerOffset;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)_setHeading:(double)a0;
- (BOOL)_shouldInnerPulse;
- (BOOL)_shouldShowOuterRing;
- (id)_innerImageMask;
- (BOOL)_rotateInnerImageToMatchCourse;
- (double)_accuracyRingAlpha;
- (BOOL)_allowsPulse;
- (BOOL)_canShowHeadingIndicator;
- (BOOL)_shouldDisplayHeading;
- (BOOL)_allowsAccuracyRing;
- (double)_maxRadiusToShowAccuracyRing;
- (struct CGPoint { double x0; double x1; })leftCalloutOffset;
- (struct CGPoint { double x0; double x1; })rightCalloutOffset;
- (long long)_headingIndicatorStyle;
- (void).cxx_destruct;
- (void)setCanShowCallout:(BOOL)a0;
- (void)setCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (double)_puckAlpha;
- (void)_updateStateFromLocation:(id)a0 duration:(double)a1;
- (void)_locationManagerFailedToUpdateLocation;
- (void)_setAllowsPulse:(BOOL)a0;
- (void)_setShouldDisplayHeading:(BOOL)a0;
- (void)_setCanShowHeadingIndicator:(BOOL)a0;
- (void)_setHeadingIndicatorStyle:(long long)a0;
- (void)_setShouldInnerPulse:(BOOL)a0;
- (void)_setShouldShowOuterRing:(BOOL)a0;
- (void)_setAllowsAccuracyRing:(BOOL)a0;
- (void)_setMaxRadiusToShowAccuracyRing:(double)a0;
- (void)_setPuckAlpha:(double)a0;
- (void)_setAccuracyRingAlpha:(double)a0;
- (void)_setPuckScale:(double)a0;
- (void)_setInnerImageMask:(id)a0;
- (void)_setRotateInnerImageToMatchCourse:(BOOL)a0;
- (void)_setSelectionPriority:(float)a0;
- (void)prepareForReuse;
- (BOOL)isSelected;
- (struct CGPoint { double x0; double x1; })calloutOffset;
- (id)_lastLocation;
- (void)_setSelected:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)canShowCallout;
- (id)rightCalloutAccessoryView;
- (id)leftCalloutAccessoryView;
- (id)detailCalloutAccessoryView;
- (void)setCalloutOffset:(struct CGPoint { double x0; double x1; })a0;

@end
