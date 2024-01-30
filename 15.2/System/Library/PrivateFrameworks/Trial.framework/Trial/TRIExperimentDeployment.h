@class NSString;

@interface TRIExperimentDeployment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;

+ (id)deploymentWithExperimentId:(id)a0 deploymentId:(int)a1;

- (void)encodeWithCoder:(id)a0;
- (id)copyWithReplacementExperimentId:(id)a0;
- (id)description;
- (BOOL)isEqualToDeployment:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExperimentId:(id)a0 deploymentId:(int)a1;
- (unsigned long long)hash;

@end
