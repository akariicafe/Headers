@class HKRouteMapGenerator;

@interface _GradientPolylineRenderer : MKOverlayPathRenderer {
    HKRouteMapGenerator *_generator;
}

- (void).cxx_destruct;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (struct { double x0; double x1; })_originMapPoint;
- (BOOL)canDrawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (id)initWithOverlay:(id)a0 locationReadings:(id)a1;

@end
