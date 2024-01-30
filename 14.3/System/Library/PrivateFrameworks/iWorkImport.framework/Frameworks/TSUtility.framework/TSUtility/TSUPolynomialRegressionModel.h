@class NSMutableArray;

@interface TSUPolynomialRegressionModel : TSURegressionModel {
    double *mCoefficients;
    int mNumCoefficients;
    BOOL mAffine;
    double mIntercept;
    double mRSquared;
    int mNumSuperscriptRanges;
    NSMutableArray *mSuperscriptRangesArray;
}

- (void).cxx_destruct;
- (void)dealloc;
- (double)rSquared;
- (double)coefficientAtIndex:(int)a0;
- (double)estimateForX:(double *)a0;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)a0;
- (int)numSuperscriptRanges;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })superscriptRangeAtIndex:(int)a0;
- (id)initAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xOrder:(int)a3;
- (int)regressionType;
- (int)numCoefficients;
- (id)initWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xOrder:(int)a3 makeAffine:(BOOL)a4 desiredIntercept:(double)a5;
- (double)estimateFor1DX:(double)a0;
- (id)initNonAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xOrder:(int)a3 desiredIntercept:(double)a4;

@end
