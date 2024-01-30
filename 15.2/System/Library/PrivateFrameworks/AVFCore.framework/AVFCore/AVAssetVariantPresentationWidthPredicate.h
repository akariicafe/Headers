@class NSPredicateOperator;

@interface AVAssetVariantPresentationWidthPredicate : NSPredicate {
    double _width;
    NSPredicateOperator *_operator;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithPresentationWidth:(double)a0 operatorType:(unsigned long long)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
