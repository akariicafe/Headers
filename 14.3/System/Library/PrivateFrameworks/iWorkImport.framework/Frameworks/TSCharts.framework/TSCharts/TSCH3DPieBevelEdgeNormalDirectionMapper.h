@interface TSCH3DPieBevelEdgeNormalDirectionMapper : TSCH3DNormalDirectionMapper {
    long long mTopMeshOffset;
    long long mAngleSteps;
    long long mRadiusSteps;
    long long mAngleLimit;
    long long mRadiusLimit;
}

- (void)mapFromVertexArray:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0 normalArray:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a1 normalMatrix:(const struct tmat3x3<float> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0[3]; } *)a2 numVertices:(long long)a3 destination:(struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x0; } x2; } *)a4;
- (id)initWithTopMeshOffset:(long long)a0 angleSteps:(long long)a1 radiusSteps:(long long)a2 angleLimit:(long long)a3 radiusLimit:(long long)a4;

@end
