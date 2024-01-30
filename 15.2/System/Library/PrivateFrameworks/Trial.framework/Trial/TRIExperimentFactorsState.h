@class TRIExperimentDeployment;

@interface TRIExperimentFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIExperimentDeployment *deployment;

+ (BOOL)supportsSecureCoding;

- (id)persisted;
- (void)encodeWithCoder:(id)a0;
- (id)experimentIdentifiers;
- (id)description;
- (BOOL)_isEqualToState:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDeployment:(id)a0;

@end
