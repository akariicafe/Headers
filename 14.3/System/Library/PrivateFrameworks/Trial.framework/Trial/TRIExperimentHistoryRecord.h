@class NSString, NSArray, NSDate;

@interface TRIExperimentHistoryRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) unsigned char eventType;
@property (readonly, nonatomic) int deploymentEnvironment;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSArray *namespaces;

+ (id)recordWithEventDate:(id)a0 eventType:(unsigned char)a1 deploymentEnvironment:(int)a2 experimentId:(id)a3 deploymentId:(int)a4 treatmentId:(id)a5 namespaces:(id)a6;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementExperimentId:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)copyWithReplacementDeploymentEnvironment:(int)a0;
- (id)copyWithReplacementTreatmentId:(id)a0;
- (id)copyWithReplacementNamespaces:(id)a0;
- (id)initWithEventDate:(id)a0 eventType:(unsigned char)a1 deploymentEnvironment:(int)a2 experimentId:(id)a3 deploymentId:(int)a4 treatmentId:(id)a5 namespaces:(id)a6;
- (id)copyWithReplacementEventDate:(id)a0;
- (id)copyWithReplacementEventType:(unsigned char)a0;
- (BOOL)isEqualToRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
