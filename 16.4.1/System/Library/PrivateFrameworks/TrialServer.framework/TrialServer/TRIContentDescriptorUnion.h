@class NSString, TRITreatmentContentDescriptor, TRIRolloutDeployment, TRIExperimentDeployment;
@protocol TRIFactorPackSetId;

@interface TRIContentDescriptorUnion : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) TRIExperimentDeployment *experiment;
@property (readonly, nonatomic) TRITreatmentContentDescriptor *treatment;
@property (readonly, nonatomic) TRIRolloutDeployment *rollout;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSet;

+ (id)unionWithType:(unsigned char)a0 experiment:(id)a1 treatment:(id)a2 rollout:(id)a3 factorPackSet:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementType:(unsigned char)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementRollout:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToUnion:(id)a0;
- (id)copyWithReplacementExperiment:(id)a0;
- (id)copyWithReplacementFactorPackSet:(id)a0;
- (id)copyWithReplacementTreatment:(id)a0;
- (id)initWithType:(unsigned char)a0 experiment:(id)a1 treatment:(id)a2 rollout:(id)a3 factorPackSet:(id)a4;

@end
