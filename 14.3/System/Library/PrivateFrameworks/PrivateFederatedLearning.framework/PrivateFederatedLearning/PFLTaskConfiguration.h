@class NSString, NSArray, MLModelConfiguration, NSURL, NSNumber;

@interface PFLTaskConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *modelIdentifier;
@property (retain, nonatomic) NSString *dataProviderIdentifier;
@property (nonatomic) int expectedModelVersion;
@property (readonly, nonatomic) NSArray *trainableLayers;
@property (readonly, nonatomic) double validationSplit;
@property (readonly, nonatomic) NSString *eligibilityCheckIdentifier;
@property (readonly, nonatomic) NSNumber *eligiblityProbability;
@property (readonly, nonatomic) NSString *metricsIdentifier;
@property (readonly, nonatomic) double privatizationNormMax;
@property (readonly, nonatomic) unsigned int privatizationNormBinCount;
@property (readonly, nonatomic) MLModelConfiguration *modelConfiguration;
@property (readonly, nonatomic) NSURL *modelTemporaryURL;

- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPFLTask:(id)a0;
- (id)initWithRawValues:(id)a0;

@end
