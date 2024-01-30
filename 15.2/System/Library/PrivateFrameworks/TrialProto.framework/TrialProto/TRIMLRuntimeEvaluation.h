@class NSString, TRIMLRuntimeSchedulingPolicy;

@interface TRIMLRuntimeEvaluation : TRIPBMessage

@property (copy, nonatomic) NSString *pluginId;
@property (nonatomic) BOOL hasPluginId;
@property (retain, nonatomic) TRIMLRuntimeSchedulingPolicy *schedulingPolicy;
@property (nonatomic) BOOL hasSchedulingPolicy;
@property (copy, nonatomic) NSString *evaluationId;
@property (nonatomic) BOOL hasEvaluationId;
@property (nonatomic) int pluginProjectId;
@property (nonatomic) BOOL hasPluginProjectId;

+ (id)descriptor;

@end
