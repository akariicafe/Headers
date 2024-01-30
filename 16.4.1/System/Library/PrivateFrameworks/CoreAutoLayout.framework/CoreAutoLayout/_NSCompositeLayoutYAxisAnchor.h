@class NSArray, NSLayoutDimension, NSLayoutYAxisAnchor;

@interface _NSCompositeLayoutYAxisAnchor : NSLayoutYAxisAnchor <NSCompositeLayoutAnchor> {
    NSLayoutYAxisAnchor *_yAxisAnchor;
    double _constant;
    double _dimensionMultiplier;
    NSLayoutDimension *_dimension;
}

@property (readonly) NSArray *_childAnchors;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithAnchor:(id)a0;
- (double)_valueInEngine:(id)a0;
- (id)_expressionInContext:(struct { long long x0; id x1; id x2; })a0;
- (id)equationDescription;
- (id)initWithAnchor:(id)a0 plusDimension:(id)a1 times:(double)a2 plus:(double)a3;

@end
