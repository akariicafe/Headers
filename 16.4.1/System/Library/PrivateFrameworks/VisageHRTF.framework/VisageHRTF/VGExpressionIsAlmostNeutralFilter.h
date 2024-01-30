@interface VGExpressionIsAlmostNeutralFilter : VGExpressionFilter {
    float _lowerBound;
    float _upperBound;
}

- (float)filter:(id)a0;
- (id)initWithLowerBound:(float)a0 withUpperBound:(float)a1;

@end
