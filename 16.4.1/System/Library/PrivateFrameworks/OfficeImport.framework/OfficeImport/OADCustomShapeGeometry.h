@class NSMutableArray;

@interface OADCustomShapeGeometry : OADShapeGeometry {
    void *mGeometryCoordSpace;
    void *mLimo;
    NSMutableArray *mFormulas;
    NSMutableArray *mTextBodyRects;
    NSMutableArray *mPaths;
}

- (void)addPath:(id)a0;
- (int)type;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)pathCount;
- (id)pathAtIndex:(unsigned long long)a0;
- (id)formulaAtIndex:(unsigned long long)a0;
- (void)addFormula:(id)a0;
- (void)addTextBodyRect:(id)a0;
- (id)equivalentCustomGeometry;
- (unsigned long long)formulaCount;
- (struct CsRect<int> { int x0[4]; })geometryCoordSpace;
- (struct CsPoint<int> { int x0[2]; })limo;
- (void)setGeometryCoordSpace:(struct CsRect<int> { int x0[4]; })a0;
- (void)setLimo:(struct CsPoint<int> { int x0[2]; })a0;
- (id)textBodyRectAtIndex:(unsigned long long)a0;
- (unsigned long long)textBodyRectCount;

@end
