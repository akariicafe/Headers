@class TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarNormalResource : TSCH3DAbstractBarNormalResource {
    TSCH3DBarExtrusionGeometry *_geometry;
}

- (id)get;
- (void).cxx_destruct;
- (id)initWithGeometry:(id)a0;

@end
