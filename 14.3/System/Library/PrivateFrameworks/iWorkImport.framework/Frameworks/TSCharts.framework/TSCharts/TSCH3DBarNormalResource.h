@class TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarNormalResource : TSCH3DAbstractBarNormalResource {
    TSCH3DBarExtrusionGeometry *mGeometry;
}

- (id)get;
- (void)dealloc;
- (id)initWithGeometry:(id)a0;

@end
