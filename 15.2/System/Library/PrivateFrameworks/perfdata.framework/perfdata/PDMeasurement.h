@class NSString, NSDictionary, PDContainer, NSNumber;

@interface PDMeasurement : NSObject

@property (retain, nonatomic) NSDictionary *measurement;
@property (retain, nonatomic) NSString *metric;
@property (retain, nonatomic) NSString *unitString;
@property (weak, nonatomic) PDContainer *container;
@property (retain, nonatomic) NSDictionary *variables;
@property (retain, nonatomic) NSDictionary *labels;
@property (nonatomic) BOOL largerBetter;
@property (nonatomic) unsigned long long group;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSNumber *sampleCount;
@property (retain, nonatomic) NSNumber *mean;
@property (retain, nonatomic) NSNumber *standardDeviation;
@property (retain, nonatomic) NSNumber *minimum;
@property (retain, nonatomic) NSNumber *maximum;
@property (nonatomic, getter=isSummary) BOOL summary;
@property (nonatomic, getter=isContext) BOOL context;
@property (retain, nonatomic) NSString *cachedMetricFilter;
@property (readonly, nonatomic) unsigned long long histogramBucketCount;
@property (readonly, nonatomic) unsigned long long percentileCount;

- (id)description;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 dictionary:(id)a1 group:(unsigned long long)a2 error:(id *)a3;
- (BOOL)isComparableTo:(id)a0;
- (BOOL)matchesVariables:(id)a0 ignoringMissing:(BOOL)a1;
- (id)metricFilter;
- (id)metricFilterIgnoringVariables:(id)a0;
- (BOOL)isLike:(id)a0;
- (id)metricFilterIgnoringNullableVariables:(id)a0;
- (BOOL)isComparableTo:(id)a0 ignoringNullableVariables:(id)a1;
- (BOOL)matchesMetricFilter:(id)a0;
- (BOOL)isComparableTo:(id)a0 ignoringVariables:(id)a1;
- (BOOL)enumerateHistogramBucketsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumeratePercentilesWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
