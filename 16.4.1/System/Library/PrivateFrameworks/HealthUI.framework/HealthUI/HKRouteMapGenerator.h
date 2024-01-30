@class MKMapSnapshotter, HKLocationReadings, UIColor;

@interface HKRouteMapGenerator : NSObject

@property (retain, nonatomic) MKMapSnapshotter *runningSnapshotter;
@property (retain, nonatomic) HKLocationReadings *locationReadings;
@property (nonatomic) BOOL useRelativeColorForSpeed;
@property (nonatomic) BOOL useMarkerAnnotations;
@property (retain, nonatomic) UIColor *startPointColor;
@property (retain, nonatomic) UIColor *endPointColor;

- (id)init;
- (void).cxx_destruct;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_adjustRectForPolyline:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_adjustedMapRectForPolyline:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_adjustedMapRectForPolyline:(id)a0 size:(struct CGSize { double x0; double x1; })a1 offsets:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_annotationViewWithIsStartPoint:(BOOL)a0;
- (void)_drawLineFromPointA:(struct CGPoint { double x0; double x1; })a0 toPointB:(struct CGPoint { double x0; double x1; })a1 atSpeed:(double)a2 context:(struct CGContext { } *)a3 drawDashes:(BOOL)a4 lineWidth:(double)a5;
- (id)_imageWithPolyline:(id)a0 lineWidth:(double)a1 mapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a2 onSnapshot:(id)a3;
- (void)_overlayAnnotationView:(id)a0 point:(struct { double x0; double x1; })a1 onSnapshot:(id)a2 context:(struct CGContext { } *)a3;
- (void)drawLinesWithPolyline:(id)a0 lineWidth:(double)a1 mapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a2 context:(struct CGContext { } *)a3 pointFromMapPoint:(id /* block */)a4;
- (id)relativeColorForSpeed:(double)a0;
- (void)snapshotWithSize:(struct CGSize { double x0; double x1; })a0 lineWidth:(double)a1 traitCollection:(id)a2 completion:(id /* block */)a3;
- (void)snapshotWithSize:(struct CGSize { double x0; double x1; })a0 lineWidth:(double)a1 traitCollection:(id)a2 offsets:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 completion:(id /* block */)a4;

@end
