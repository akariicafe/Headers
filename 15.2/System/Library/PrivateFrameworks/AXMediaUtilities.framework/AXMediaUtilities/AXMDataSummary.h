@class NSString, NSArray, NSNumberFormatter, AXMDataSeriesDescriptor, AXMDataRegressionModel, AXMChartDescriptor, NSObject;
@protocol AXMDataSummaryCategoryNameProvider;

@interface AXMDataSummary : NSObject

@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSArray *xValues;
@property (retain, nonatomic) NSArray *yValues;
@property (retain, nonatomic) NSArray *axisTitles;
@property (nonatomic) unsigned long long numValues;
@property (weak, nonatomic) AXMDataSeriesDescriptor *series;
@property (weak, nonatomic) AXMChartDescriptor *chartDescriptor;
@property (retain, nonatomic) NSArray *dataFeatureDescriptions;
@property (retain, nonatomic) NSArray *statsDescriptions;
@property (readonly, nonatomic) AXMDataRegressionModel *regressionModel;
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

- (void)compute;
- (id)description;
- (void).cxx_destruct;
- (void)computeR;
- (double)getMean:(id)a0;
- (void)getValues:(double *)a0 fromNSNumberArray:(id)a1;
- (void)setRegressionModel:(id)a0;
- (void)computeRanges;
- (void)computeMeans;
- (void)computeCovariance;
- (void)computeVariances;
- (void)computeLinearRegression;
- (void)computeResiduals;
- (void)computeOutliers;
- (double)getVariance:(id)a0;
- (id)initWithSeries:(id)a0 chartDescriptor:(id)a1;
- (void)computeRegressionModel:(id /* block */)a0;
- (id)stringForComponents:(id)a0;
- (double)getMedian:(id)a0;
- (double)positionForXAxisValue:(double)a0;
- (double)positionForYAxisValue:(double)a0;

@end
