@class TSCH3DBarExtrusionGeometry, TSCH3DTexCoordGeneration;

@interface TSCH3DBarTexCoordResource : TSCH3DAbstractBarTexCoordResource {
    TSCH3DBarExtrusionGeometry *mGeometry;
    TSCH3DTexCoordGeneration *mGenerator;
}

- (id)get;
- (void)dealloc;
- (id)initWithGeometry:(id)a0 generator:(id)a1;

@end
