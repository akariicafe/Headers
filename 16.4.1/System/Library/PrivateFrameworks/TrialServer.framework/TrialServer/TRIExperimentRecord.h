@class NSString, NSArray, TRIClientExperimentArtifact, NSDate, TRIExperimentDeployment;

@interface TRIExperimentRecord : NSObject <NSCopying>

@property (readonly, nonatomic) int deploymentEnvironment;
@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeployment;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *namespaces;
@property (readonly, nonatomic) BOOL isShadow;
@property (readonly, nonatomic) BOOL isManuallyTargeted;
@property (readonly, nonatomic) TRIClientExperimentArtifact *artifact;

+ (id)recordWithDeploymentEnvironment:(int)a0 experimentDeployment:(id)a1 treatmentId:(id)a2 type:(int)a3 status:(long long)a4 startDate:(id)a5 endDate:(id)a6 namespaces:(id)a7 isShadow:(BOOL)a8 isManuallyTargeted:(BOOL)a9 artifact:(id)a10;

- (id)copyWithReplacementDeploymentEnvironment:(int)a0;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (BOOL)isEqualToRecord:(id)a0;
- (id)copyWithReplacementNamespaces:(id)a0;
- (id)copyWithReplacementStatus:(long long)a0;
- (id)copyWithReplacementStartDate:(id)a0;
- (BOOL)isExpiredExperiment;
- (id)initWithDeploymentEnvironment:(int)a0 experimentDeployment:(id)a1 treatmentId:(id)a2 type:(int)a3 status:(long long)a4 startDate:(id)a5 endDate:(id)a6 namespaces:(id)a7 isShadow:(BOOL)a8 isManuallyTargeted:(BOOL)a9 artifact:(id)a10;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementType:(int)a0;
- (id)copyWithReplacementExperimentDeployment:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithReplacementIsManuallyTargeted:(BOOL)a0;
- (id)description;
- (id)copyWithReplacementEndDate:(id)a0;
- (id)copyWithReplacementArtifact:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementIsShadow:(BOOL)a0;

@end
