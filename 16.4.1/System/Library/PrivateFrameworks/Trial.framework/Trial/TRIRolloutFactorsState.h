@class TRIRolloutDeployment;

@interface TRIRolloutFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)rolloutIdentifiers;
- (void).cxx_destruct;
- (BOOL)_isEqualToState:(id)a0;
- (id)initWithDeployment:(id)a0;
- (id)persisted;

@end
