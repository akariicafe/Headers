@class TSDLayoutGeometry, TSDInfoGeometry;

@interface TSWPEquationFloatingLayout : TSWPEquationLayout {
    TSDInfoGeometry *_dynamicInfoGeometry;
    TSDLayoutGeometry *_baseEquationLayoutGeometry;
}

@property (readonly, nonatomic) TSDInfoGeometry *currentInfoGeometry;

- (void).cxx_destruct;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;

@end
