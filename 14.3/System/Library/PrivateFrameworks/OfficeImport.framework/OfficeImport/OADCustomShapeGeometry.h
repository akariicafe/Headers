@class NSMutableArray;

@interface OADCustomShapeGeometry : OADShapeGeometry {
    struct CsRect<int> { int x0[4]; } *mGeometryCoordSpace;
    struct CsPoint<int> { int x0[2]; } *mLimo;
    NSMutableArray *mFormulas;
    NSMutableArray *mTextBodyRects;
    NSMutableArray *mPaths;
}

- (id)init;
- (void).cxx_destruct;
- (struct CsPoint<int> { int x0[2]; })limo;
- (void)dealloc;
- (id)pathAtIndex:(unsigned long long)a0;
- (void)addPath:(id)a0;
- (id)description;
- (int)type;
- (unsigned long long)pathCount;
- (id)equivalentCustomGeometry;
- (unsigned long long)textBodyRectCount;
- (id)textBodyRectAtIndex:(unsigned long long)a0;
- (struct CsRect<int> { int x0[4]; })geometryCoordSpace;
- (void)setGeometryCoordSpace:(struct CsRect<int> { int x0[4]; })a0;
- (unsigned long long)formulaCount;
- (id)formulaAtIndex:(unsigned long long)a0;
- (void)addFormula:(id)a0;
- (void)addTextBodyRect:(id)a0;
- (void)setLimo:(struct CsPoint<int> { int x0[2]; })a0;

@end
