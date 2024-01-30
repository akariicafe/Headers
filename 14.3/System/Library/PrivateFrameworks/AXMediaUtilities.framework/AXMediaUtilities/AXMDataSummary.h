@class NSArray, NSNumberFormatter, AXMDataRegressionModel, NSString, NSObject;
@protocol AXMDataSummaryCategoryNameProvider;

@interface AXMDataSummary : NSObject

@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (readonly, nonatomic) NSArray *axisTitles;
@property (readonly, nonatomic) NSArray *xValues;
@property (readonly, nonatomic) NSArray *yValues;
@property (readonly, nonatomic) AXMDataRegressionModel *regressionModel;
@property (readonly, nonatomic) unsigned long long n;
@property (readonly, nonatomic) double r;
@property (readonly, nonatomic) double rSquared;
@property (readonly, nonatomic) double minX;
@property (readonly, nonatomic) double maxX;
@property (readonly, nonatomic) double meanX;
@property (readonly, nonatomic) double varianceX;
@property (readonly, nonatomic) double minY;
@property (readonly, nonatomic) double maxY;
@property (readonly, nonatomic) double meanY;
@property (readonly, nonatomic) double varianceY;
@property (readonly, nonatomic) double covariance;
@property (readonly, nonatomic) double slope;
@property (readonly, nonatomic) double intercept;
@property (readonly, nonatomic) NSArray *residuals;
@property (readonly, nonatomic) NSArray *outliers;
@property (weak, nonatomic) NSObject<AXMDataSummaryCategoryNameProvider> *categoryNameDelegate;
@property (readonly, nonatomic) NSString *modelDescription;
@property (readonly, nonatomic) NSString *slopeDescription;
@property (readonly, nonatomic) NSString *confidenceDescription;
@property (readonly, nonatomic) NSString *minValueDescription;
@property (readonly, nonatomic) NSString *maxValueDescription;
@property (readonly, nonatomic) NSString *meanValueDescription;
@property (readonly, nonatomic) NSString *medianValueDescription;
@property (readonly, nonatomic) NSString *outliersDescription;
@property (readonly, nonatomic) NSString *bestFitCurveEquation;
@property (readonly, nonatomic) NSString *fullDescription;
@property (readonly, nonatomic) NSString *simpleDescription;
@property (readonly, nonatomic) NSString *numericalDescription;

- (void)compute;
- (void).cxx_destruct;
- (double)getMedian:(id)a0;
- (id)description;
- (void)getValues:(double *)a0 fromNSNumberArray:(id)a1;
- (void)setRegressionModel:(id)a0;
- (id)descriptionForXValue:(double)a0;
- (id)stringForComponents:(id)a0;
- (void)computeRanges;
- (void)computeMeans;
- (void)computeCovariance;
- (void)computeVariances;
- (void)computeLinearRegression;
- (void)computeResiduals;
- (void)computeOutliers;
- (double)getVariance:(id)a0;
- (double)positionForXAxisValue:(double)a0;
- (id)initWithAxisTitles:(id)a0 xValues:(id)a1 yValues:(id)a2;
- (void)computeRegressionModel:(id /* block */)a0;
- (double)positionForYAxisValue:(double)a0;
- (void)computeR;
- (double)getMean:(id)a0;

@end
