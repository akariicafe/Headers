@interface WKInterfaceMap : WKInterfaceObject

- (void)setRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)setVisibleMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)removeAllAnnotations;
- (void)addAnnotation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withImage:(id)a1 centerOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)addAnnotation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withImageNamed:(id)a1 centerOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)addAnnotation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 withPinColor:(long long)a1;

@end
