@class NSMutableArray;

@interface OADCustomShapeGeometry : OADShapeGeometry {
    void *mGeometryCoordSpace;
    void *mLimo;
    NSMutableArray *mFormulas;
    NSMutableArray *mTextBodyRects;
    NSMutableArray *mPaths;
}

- (void)addPath:(id)a0;
- (struct CsPoint<int> { int x0[2]; })limo;
- (id)description;
- (unsigned long long)pathCount;
- (void).cxx_destruct;
- (id)init;
- (id)pathAtIndex:(unsigned long long)a0;
- (int)type;
- (void)dealloc;
- (struct CsRect<int> { int x0[4]; })geometryCoordSpace;
- (void)addFormula:(id)a0;
- (void)addTextBodyRect:(id)a0;
- (void)setLimo:(struct CsPoint<int> { int x0[2]; })a0;
- (unsigned long long)formulaCount;
- (id)formulaAtIndex:(unsigned long long)a0;
- (unsigned long long)textBodyRectCount;
- (id)textBodyRectAtIndex:(unsigned long long)a0;
- (id)equivalentCustomGeometry;
- (void)setGeometryCoordSpace:(struct CsRect<int> { int x0[4]; })a0;

@end
