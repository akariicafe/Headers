@interface TSCH3DBarNormalDirectionMapper : TSCH3DNormalDirectionMapper {
    long long _wallOffset;
    long long _crossSectionCount;
    long long _spineCount;
    long long _beginLimit;
    long long _endLimit;
}

- (id)initWithWallOffset:(long long)a0 crossSectionCount:(long long)a1 spineCount:(long long)a2 beginLimit:(long long)a3 endLimit:(long long)a4;
- (void)mapFromVertexArray:(const void *)a0 normalArray:(const void *)a1 normalMatrix:(const void *)a2 numVertices:(long long)a3 destination:(void *)a4;

@end
