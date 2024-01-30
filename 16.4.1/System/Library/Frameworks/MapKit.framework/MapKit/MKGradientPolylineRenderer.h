@class NSArray;

@interface MKGradientPolylineRenderer : MKPolylineRenderer {
    NSArray *_colors;
    NSArray *_externallySetColors;
    NSArray *_locations;
    NSArray *_externallySetLocations;
}

@property (readonly, copy, nonatomic) NSArray *locations;
@property (readonly, copy, nonatomic) NSArray *colors;

+ (Class)_mapkitLeafClass;

- (void).cxx_destruct;
- (BOOL)_canProvideVectorGeometry;
- (void)_updateColorStops;
- (void)_updateVectorGeometry:(id)a0;
- (void)drawMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 zoomScale:(double)a1 inContext:(struct CGContext { } *)a2;
- (void)setColors:(id)a0 atLocations:(id)a1;

@end
