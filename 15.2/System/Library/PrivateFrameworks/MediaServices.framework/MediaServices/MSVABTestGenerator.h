@interface MSVABTestGenerator : NSObject

@property (readonly, nonatomic) float probabilityForOutcomeA;
@property (readonly, nonatomic) long long totalExperiments;
@property (readonly, nonatomic) long long totalForOutcomeA;
@property (readonly, nonatomic) long long totalForOutcomeB;

- (id)description;
- (id)initWithProbabilityForOutcomeA:(float)a0;
- (void)updateProbabilityForOutcomeA:(float)a0;
- (long long)nextOutcome;

@end
