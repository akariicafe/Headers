@class TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarVertexResource : TSCH3DAbstractBarVertexResource {
    TSCH3DBarExtrusionGeometry *_geometry;
}

- (id)get;
- (id)geometry;
- (void).cxx_destruct;
- (long long)numVertices;
- (long long)verticesOffset;
- (long long)capOffset;
- (long long)numCapVertices;
- (id)initWithGeometry:(id)a0;

@end
