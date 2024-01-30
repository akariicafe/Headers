@interface PXPlacesMapView : MKMapView {
    double _currentScale;
}

@property double pitch;

+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })MKMapRectForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })canonicalMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })mapRectForNearbyQueriesFromRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 atScale:(double)a1 targetViewSize:(struct CGSize { double x0; double x1; })a2;
+ (id)mapViewWithMarkedLocation:(id)a0 regionRadius:(double)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

- (void)awakeFromNib;
- (double)zoomLevel;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)ppt_performPlacesScrollTest:(id)a0 iterations:(long long)a1 screenDelta:(long long)a2 delay:(double)a3 completion:(id /* block */)a4;
- (void)ppt_performPlacesZoomTest:(id)a0 iterations:(long long)a1 delay:(double)a2 completion:(id /* block */)a3;
- (id)currentViewPort;
- (void)deselectAllAnnotationsAnimated:(BOOL)a0;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })ppt_cityMapRect;
- (double)_radiansFromDegrees:(double)a0;
- (double)_sampleMapDistanceFromViewPoint:(struct CGPoint { double x0; double x1; })a0 toViewPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)currentViewPortWithThumbnailOverscan;
- (id /* block */)ppt_visibleMapRectBlockForQueue:(id)a0 delay:(double)a1;

@end
