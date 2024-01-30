@class NSDictionary, NSArray, NSDate;

@interface ENExposureInfo : NSObject <CUXPCCodable>

@property (nonatomic) long long daysSinceOnsetOfSymptoms;
@property (nonatomic) unsigned int diagnosisReportType;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSArray *attenuationDurations;
@property (nonatomic) unsigned char attenuationValue;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double duration;
@property (nonatomic) unsigned char totalRiskScore;
@property (nonatomic) double totalRiskScoreFullRange;
@property (nonatomic) unsigned char transmissionRiskLevel;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
