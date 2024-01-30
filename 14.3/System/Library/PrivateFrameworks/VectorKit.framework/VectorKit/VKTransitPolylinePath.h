@interface VKTransitPolylinePath : VKPolylinePath {
    unsigned long long _lineID;
}

@property (readonly, nonatomic) double vertexEqualityTolerance;

- (id)initWithOverlay:(id)a0 section:(id)a1 points:(struct Matrix<float, 2, 1> { float x0[2]; } *)a2 pointCount:(unsigned long long)a3 reversePoints:(BOOL)a4 transform:(struct { struct Matrix<float, 2, 1> { float x0[2]; } x0; struct Matrix<float, 2, 1> { float x0[2]; } x1; } *)a5 routeStartIndex:(unsigned int)a6 routeEndIndex:(unsigned int)a7 lineID:(unsigned long long)a8 tileZ:(unsigned int)a9 vertexPrecision:(unsigned char)a10;
- (id)initWithOverlay:(id)a0 section:(id)a1 points:(struct Matrix<float, 2, 1> { float x0[2]; } *)a2 pointCount:(unsigned long long)a3 reversePoints:(BOOL)a4 transform:(struct { struct Matrix<float, 2, 1> { float x0[2]; } x0; struct Matrix<float, 2, 1> { float x0[2]; } x1; } *)a5 routeStartIndex:(unsigned int)a6 routeEndIndex:(unsigned int)a7 lineID:(unsigned long long)a8;
- (id)description;

@end
