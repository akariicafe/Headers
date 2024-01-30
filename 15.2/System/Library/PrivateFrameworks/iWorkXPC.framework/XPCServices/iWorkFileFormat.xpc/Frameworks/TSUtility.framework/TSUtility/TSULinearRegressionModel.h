@interface TSULinearRegressionModel : TSURegressionModel {
    double *mCoefficients;
    int mNumCoefficients;
    BOOL mAffine;
    double mIntercept;
    double *mCoefficientsStandardErrors;
    double mRSquared;
    double mStandardError;
    double mFStatistic;
    double mDegreesFreedom;
    double mRegressionSumSquares;
    double mErrorSumSquares;
}

- (double)standardError;
- (double)rSquared;
- (void)dealloc;
- (id)initAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3;
- (id)initNonAffineWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3 desiredIntercept:(double)a4;
- (double)coefficientAtIndex:(int)a0;
- (double)coefficientStandardErrorAtIndex:(int)a0;
- (double)fStatistic;
- (double)degreesFreedom;
- (double)regressionSumSquares;
- (double)errorSumSquares;
- (double)estimateForX:(double *)a0;
- (id)getEquationStringAndBuildSuperscriptRangesArray:(id)a0;
- (id)initWithMappings:(int)a0 xs:(double *)a1 ys:(double *)a2 xDimension:(int)a3 makeAffine:(BOOL)a4 desiredIntercept:(double)a5;
- (int)regressionType;
- (int)numCoefficients;

@end
