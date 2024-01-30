@interface TSUMovingAverageRegressionModel : TSURegressionModel {
    int mNumTrendPoint;
    double *mTrendXValues;
    double *mTrendYValues;
}

- (void)dealloc;
- (double)rSquared;
- (double)coefficientAtIndex:(int)a0;
- (id)initAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3;
- (id)initNonAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3 desiredIntercept:(double)a4;
- (double)estimateForX:(double *)a0;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)a0;
- (id)initWithMappings:(int)a0 xs:(id)a1 ys:(id)a2 numPeriod:(int)a3;
- (int)numSuperscriptRanges;
- (int)numTrendPoint;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })superscriptRangeAtIndex:(int)a0;
- (double)trendXValueAtIndex:(int)a0;
- (double)trendYValueAtIndex:(int)a0;
- (int)numCoefficients;
- (id)equationString;
- (int)regressionType;

@end
