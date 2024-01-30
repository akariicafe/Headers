@class NSString;

@interface TRIExperimentDeployment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;

+ (id)deploymentWithExperimentId:(id)a0 deploymentId:(int)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithExperimentId:(id)a0 deploymentId:(int)a1;
- (BOOL)isEqualToDeployment:(id)a0;
- (id)copyWithReplacementExperimentId:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (void)encodeWithCoder:(id)a0;

@end
