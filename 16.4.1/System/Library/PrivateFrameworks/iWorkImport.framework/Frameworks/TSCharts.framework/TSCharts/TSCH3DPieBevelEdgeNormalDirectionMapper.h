@interface TSCH3DPieBevelEdgeNormalDirectionMapper : TSCH3DNormalDirectionMapper {
    long long _topMeshOffset;
    long long _angleSteps;
    long long _radiusSteps;
    long long _angleLimit;
    long long _radiusLimit;
}

- (id)initWithTopMeshOffset:(long long)a0 angleSteps:(long long)a1 radiusSteps:(long long)a2 angleLimit:(long long)a3 radiusLimit:(long long)a4;
- (void)mapFromVertexArray:(const void *)a0 normalArray:(const void *)a1 normalMatrix:(const void *)a2 numVertices:(long long)a3 destination:(void *)a4;

@end
