@class NSString, TRIExperimentDeployment;

@interface TRIExperimentTreatment : NSObject <NSCopying>

@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeployment;
@property (readonly, nonatomic) NSString *treatmentId;

+ (id)treatmentWithExperimentDeployment:(id)a0 treatmentId:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementExperimentDeployment:(id)a0;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (id)initWithExperimentDeployment:(id)a0 treatmentId:(id)a1;
- (BOOL)isEqualToTreatment:(id)a0;

@end
