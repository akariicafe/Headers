@class NSString, MLRTrialTaskSchedulingPolicy, TRIFactorsState;

@interface MLRInternalTrialTask : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIFactorsState *evaluationState;
@property (readonly, nonatomic) MLRTrialTaskSchedulingPolicy *policy;
@property (readonly, nonatomic) int projectId;
@property (readonly, nonatomic) NSString *evaluationID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEvaluationState:(id)a0 schedulingPolicy:(id)a1 pluginProjectId:(int)a2;
- (id)initWithEvaluationState:(id)a0 runtimeEvaluation:(id)a1 pluginProjectId:(int)a2;
- (id)initWithEvaluationState:(id)a0 runtimeEvaluation:(id)a1;

@end
