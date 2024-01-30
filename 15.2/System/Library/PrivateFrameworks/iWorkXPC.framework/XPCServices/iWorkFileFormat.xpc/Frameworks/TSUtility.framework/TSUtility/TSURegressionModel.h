@interface TSURegressionModel : NSObject {
    BOOL mModelValid;
    int mErrorType;
}

- (double)rSquared;
- (int)errorType;
- (id)initAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3;
- (id)initNonAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3 desiredIntercept:(double)a4;
- (double)coefficientAtIndex:(int)a0;
- (double)estimateForX:(double *)a0;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)a0;
- (int)numSuperscriptRanges;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })superscriptRangeAtIndex:(int)a0;
- (BOOL)isModelValid;
- (id)formattedStringWithCoefficient:(double)a0 locale:(id)a1;
- (int)regressionType;
- (int)numCoefficients;
- (id)equationString;

@end
