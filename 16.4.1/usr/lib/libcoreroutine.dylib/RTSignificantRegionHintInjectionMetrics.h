@class NSError, RTLocation, RTLearnedLocationOfInterest;

@interface RTSignificantRegionHintInjectionMetrics : NSObject

@property (readonly, nonatomic) RTLocation *region;
@property (readonly, nonatomic) RTLearnedLocationOfInterest *locationOfInterest;
@property (nonatomic) long long hintSource;
@property (retain, nonatomic) NSError *matchingError;
@property (nonatomic) BOOL hintSubmitted;

+ (void)submitMetricsWithHintSource:(long long)a0 region:(id)a1 locationOfInterest:(id)a2 hintSubmitted:(BOOL)a3 matchingError:(id)a4;

- (void)submitMetrics;
- (id)init;
- (void).cxx_destruct;
- (id)computeMetrics;
- (id)initWithHintSource:(long long)a0 region:(id)a1 locationOfInterest:(id)a2 hintSubmitted:(BOOL)a3 matchingError:(id)a4;

@end
