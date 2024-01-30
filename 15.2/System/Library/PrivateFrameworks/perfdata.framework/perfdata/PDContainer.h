@class NSString, NSDictionary, NSMutableDictionary;

@interface PDContainer : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSDictionary *configuration;
@property (retain, nonatomic) NSMutableDictionary *extensions;
@property (retain, nonatomic) NSString *testDescription;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) NSString *generator;
@property (retain, nonatomic) NSString *primaryMetricFilter;
@property (nonatomic) BOOL largerBetter;
@property (retain, nonatomic) NSDictionary *variables;
@property (retain, nonatomic) NSDictionary *labels;
@property (retain, nonatomic) NSMutableDictionary *perfdata;
@property (readonly, nonatomic) unsigned long long measurementCount;

+ (id)containerWithPath:(id)a0 error:(id *)a1;
+ (id)containerWithFileURL:(id)a0 error:(id *)a1;
+ (id)containerWithJSONData:(id)a0 error:(id *)a1;
+ (id)containerWithJSONDictionary:(id)a0 error:(id *)a1;

- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithJSONData:(id)a0 error:(id *)a1;
- (BOOL)isComparableTo:(id)a0;
- (BOOL)enumerateMeasurementsMatchingNullableFilter:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)enumerateAggregatedMeasurementsMatchingNullableFilter:(id)a0 ignoringVariables:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateMeasurementsMatchingFilter:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (BOOL)isLike:(id)a0;
- (BOOL)enumerateMeasurementsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)enumerateAggregatedMeasurementsMatchingFilter:(id)a0 ignoringVariables:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (BOOL)enumerateAggregatedMeasurementsIgnoringVariables:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)aggregateMeasurementsMatchingFilter:(id)a0 error:(id *)a1;

@end
