@class NSArray, NSLayoutXAxisAnchor, NSLayoutDimension;

@interface _NSCompositeLayoutXAxisAnchor : NSLayoutXAxisAnchor <NSCompositeLayoutAnchor> {
    NSLayoutXAxisAnchor *_xAxisAnchor;
    double _constant;
    double _dimensionMultiplier;
    NSLayoutDimension *_dimension;
}

@property (readonly) NSArray *_childAnchors;

- (void)dealloc;
- (id)initWithAnchor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_expressionInContext:(struct { long long x0; id x1; id x2; })a0;
- (double)_valueInEngine:(id)a0;
- (id)equationDescription;
- (id)initWithAnchor:(id)a0 plusDimension:(id)a1 times:(double)a2 plus:(double)a3;
- (long long)_directionAbstraction;
- (void)encodeWithCoder:(id)a0;

@end
