@class TRIRolloutDeployment;

@interface TRIRolloutFactorsState : TRIFactorsState

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;

+ (BOOL)supportsSecureCoding;

- (id)persisted;
- (void)encodeWithCoder:(id)a0;
- (id)rolloutIdentifiers;
- (id)description;
- (BOOL)_isEqualToState:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDeployment:(id)a0;

@end
