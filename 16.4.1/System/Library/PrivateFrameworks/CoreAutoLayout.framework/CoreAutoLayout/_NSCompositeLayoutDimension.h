@class NSArray, NSLayoutDimension;

@interface _NSCompositeLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {
    NSLayoutDimension *_firstLayoutDimension;
    double _secondLayoutDimensionMultiplier;
    NSLayoutDimension *_secondLayoutDimension;
}

@property (readonly) NSArray *_childAnchors;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithAnchor:(id)a0;
- (double)_valueInEngine:(id)a0;
- (id)_expressionInContext:(struct { long long x0; id x1; id x2; })a0;
- (id)equationDescription;
- (id)initWithDimension:(id)a0 plusDimension:(id)a1;
- (id)initWithDimension:(id)a0 plusDimension:(id)a1 times:(double)a2;

@end
