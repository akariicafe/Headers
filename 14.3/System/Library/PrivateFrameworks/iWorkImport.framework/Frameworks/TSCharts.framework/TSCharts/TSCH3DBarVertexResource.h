@class TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarVertexResource : TSCH3DAbstractBarVertexResource {
    TSCH3DBarExtrusionGeometry *mGeometry;
}

- (id)geometry;
- (id)get;
- (void)dealloc;
- (long long)numVertices;
- (long long)verticesOffset;
- (long long)capOffset;
- (long long)numCapVertices;
- (id)initWithGeometry:(id)a0;

@end
