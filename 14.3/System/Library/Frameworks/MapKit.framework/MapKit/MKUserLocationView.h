@class _MKUserLocationView;

@interface MKUserLocationView : MKAnnotationView {
    BOOL _selected;
}

@property (retain, nonatomic, getter=_mkUserLocationView, setter=_setMKUserLocationView:) _MKUserLocationView *mkUserLocationView;

- (struct CGPoint { double x0; double x1; })centerOffset;
- (void)prepareForDisplay;
- (void)_setMapDisplayStyle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; BOOL x4; })a0;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (float)_selectionPriority;
- (void)setDetailCalloutAccessoryView:(id)a0;
- (void)setAnnotation:(id)a0;
- (void)setCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (double)_heading;
- (BOOL)_isStale;
- (BOOL)_shouldInnerPulse;
- (BOOL)_shouldShowOuterRing;
- (id)_innerImageMask;
- (BOOL)_rotateInnerImageToMatchCourse;
- (double)_accuracyRingAlpha;
- (BOOL)_allowsPulse;
- (BOOL)_canShowHeadingIndicator;
- (BOOL)_shouldDisplayHeading;
- (BOOL)_allowsAccuracyRing;
- (void)prepareForReuse;
- (double)_maxRadiusToShowAccuracyRing;
- (long long)_headingIndicatorStyle;
- (struct CGPoint { double x0; double x1; })leftCalloutOffset;
- (struct CGPoint { double x0; double x1; })rightCalloutOffset;
- (BOOL)isDraggable;
- (void)setLeftCalloutOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setRightCalloutOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_setMapType:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })calloutOffset;
- (void)_updateStateFromLocation:(id)a0 duration:(double)a1;
- (void)_locationManagerFailedToUpdateLocation;
- (void)_setShouldDisplayHeading:(BOOL)a0;
- (void)_setCanShowHeadingIndicator:(BOOL)a0;
- (void)_setAllowsPulse:(BOOL)a0;
- (void)_setHeadingIndicatorStyle:(long long)a0;
- (void)_setShouldInnerPulse:(BOOL)a0;
- (void)_setShouldShowOuterRing:(BOOL)a0;
- (void)_setAllowsAccuracyRing:(BOOL)a0;
- (void)_setMaxRadiusToShowAccuracyRing:(double)a0;
- (double)_puckAlpha;
- (void)_setPuckAlpha:(double)a0;
- (void)_setPuckScale:(double)a0;
- (void)_setAccuracyRingAlpha:(double)a0;
- (void)_setInnerImageMask:(id)a0;
- (void)_setRotateInnerImageToMatchCourse:(BOOL)a0;
- (void)setLeftCalloutAccessoryView:(id)a0;
- (void)_setHeading:(double)a0;
- (BOOL)_allowedToShowCallout;
- (void)setCanShowCallout:(BOOL)a0;
- (void)_setSelected:(BOOL)a0 animated:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_annotationTrackingInsets;
- (void)_setMapRotationRadians:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mapkit_visibleRect;
- (void)setRightCalloutAccessoryView:(id)a0;
- (id)_lastLocation;
- (void)_updateFromMap;
- (id)rightCalloutAccessoryView;
- (id)leftCalloutAccessoryView;
- (id)detailCalloutAccessoryView;
- (BOOL)canShowCallout;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)setCalloutOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_setMapPitchRadians:(double)a0;
- (void)_setSelectionPriority:(float)a0;

@end
