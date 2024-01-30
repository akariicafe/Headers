@class NSArray, NSDictionary;

@interface ENExposureDetectionSummary : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSArray *attenuationDurations;
@property (nonatomic) long long daysSinceLastExposure;
@property (nonatomic) unsigned long long matchedKeyCount;
@property (nonatomic) unsigned char maximumRiskScore;
@property (nonatomic) double maximumRiskScoreFullRange;
@property (nonatomic) double riskScoreSumFullRange;
@property (copy, nonatomic) NSArray *daySummaries;
@property (readonly, copy, nonatomic) NSDictionary *metadata;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;

@end
