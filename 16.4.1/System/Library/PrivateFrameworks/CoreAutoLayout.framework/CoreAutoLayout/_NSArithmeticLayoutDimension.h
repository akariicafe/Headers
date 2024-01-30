@class NSArray, NSLayoutDimension;

@interface _NSArithmeticLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor> {
    NSLayoutDimension *_rootLayoutDimension;
    double _multiplier;
    double _constant;
}

@property (readonly) NSArray *_childAnchors;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithAnchor:(id)a0;
- (double)_valueInEngine:(id)a0;
- (id)_expressionInContext:(struct { long long x0; id x1; id x2; })a0;
- (id)_nearestAncestorLayoutItem;
- (id)equationDescription;
- (id)initWithMultiplier:(double)a0 dimension:(id)a1 constant:(double)a2;

@end
