@class TSDLayout, TSWPColumn, TSUPointerKeyDictionary, TSDWrapPolygon;
@protocol TSWPLayoutTarget;

@interface SXTextTangierTextWrapContext : NSObject

@property (retain, nonatomic) TSUPointerKeyDictionary *wrapPathInverseTransformInRootDictionary;
@property (readonly, nonatomic) TSWPColumn *column;
@property (readonly, weak, nonatomic) TSDLayout<TSWPLayoutTarget> *target;
@property (readonly, nonatomic) TSDWrapPolygon *interiorWrapPolygon;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } targetInverseTransformInRoot;

- (void).cxx_destruct;
- (void)setTarget:(id)a0;
- (id)initWithColumn:(id)a0 targetLayout:(id)a1;
- (id)transformedWrapPolygonForWrappable:(id)a0 canvasSpaceToWrapSpaceTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;

@end
