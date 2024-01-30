@interface TSCH3DBarNormalDirectionMapper : TSCH3DNormalDirectionMapper {
    long long mWallOffset;
    long long mCrossSectionCount;
    long long mSpineCount;
    long long mBeginLimit;
    long long mEndLimit;
}

- (void)mapFromVertexArray:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0 normalArray:(const struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a1 normalMatrix:(const struct tmat3x3<float> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0[3]; } *)a2 numVertices:(long long)a3 destination:(struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x0; } x2; } *)a4;
- (id)initWithWallOffset:(long long)a0 crossSectionCount:(long long)a1 spineCount:(long long)a2 beginLimit:(long long)a3 endLimit:(long long)a4;

@end
