@class NSString, NSArray, NSDate, TRIExperimentDeployment;

@interface TRIExperimentRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int deploymentEnvironment;
@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeployment;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *namespaces;

+ (id)recordWithDeploymentEnvironment:(int)a0 experimentDeployment:(id)a1 treatmentId:(id)a2 type:(int)a3 status:(long long)a4 startDate:(id)a5 endDate:(id)a6 namespaces:(id)a7;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementType:(int)a0;
- (id)initWithDeploymentEnvironment:(int)a0 experimentDeployment:(id)a1 treatmentId:(id)a2 type:(int)a3 status:(long long)a4 startDate:(id)a5 endDate:(id)a6 namespaces:(id)a7;
- (id)copyWithReplacementDeploymentEnvironment:(int)a0;
- (id)copyWithReplacementStatus:(long long)a0;
- (id)copyWithReplacementExperimentDeployment:(id)a0;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (id)copyWithReplacementStartDate:(id)a0;
- (id)copyWithReplacementEndDate:(id)a0;
- (id)copyWithReplacementNamespaces:(id)a0;
- (BOOL)isEqualToRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
