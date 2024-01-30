@class TSCH3DBarExtrusionGeometry, TSCH3DTexCoordGeneration;

@interface TSCH3DBarTexCoordResource : TSCH3DAbstractBarTexCoordResource {
    TSCH3DBarExtrusionGeometry *_geometry;
    TSCH3DTexCoordGeneration *_generator;
}

- (id)get;
- (void).cxx_destruct;
- (id)initWithGeometry:(id)a0 generator:(id)a1;

@end
