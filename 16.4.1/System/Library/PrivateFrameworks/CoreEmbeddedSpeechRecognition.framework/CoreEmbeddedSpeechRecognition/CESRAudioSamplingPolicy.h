@class NSNumber, CESRSamplingDimension;

@interface CESRAudioSamplingPolicy : NSObject

@property (readonly, copy, nonatomic) CESRSamplingDimension *ruleDimension;
@property (readonly, copy, nonatomic) NSNumber *samplingRate;
@property (readonly, nonatomic) long long numDimension;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRuleDimension:(id)a0 samplingRate:(id)a1 numDimension:(long long)a2;
- (BOOL)isMatchedSamplingDimension:(id)a0;

@end
