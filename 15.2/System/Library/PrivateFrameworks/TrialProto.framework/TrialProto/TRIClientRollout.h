@class NSString, TRIShadowEvaluation, TRIAssignment, NSMutableArray;

@interface TRIClientRollout : TRIPBMessage

@property (copy, nonatomic) NSString *rolloutId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (retain, nonatomic) TRIAssignment *assignment;
@property (nonatomic) BOOL hasAssignment;
@property (retain, nonatomic) TRIShadowEvaluation *shadowEvaluation;
@property (nonatomic) BOOL hasShadowEvaluation;
@property (retain, nonatomic) NSMutableArray *selectedNamespaceArray;
@property (readonly, nonatomic) unsigned long long selectedNamespaceArray_Count;
@property (copy, nonatomic) NSString *rampId;
@property (nonatomic) BOOL hasRampId;

+ (id)descriptor;

@end
