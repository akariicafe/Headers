@class TRIPBStruct, NSString, TRIPBTimestamp, TRIClientSelectedNamespace, TRIAssignment, NSMutableArray;

@interface TRIClientBackgroundMLTask : TRIPBMessage

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) BOOL hasTaskId;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) int projectId;
@property (nonatomic) BOOL hasProjectId;
@property (copy, nonatomic) NSString *namespaceId;
@property (nonatomic) BOOL hasNamespaceId;
@property (copy, nonatomic) NSString *pluginId;
@property (nonatomic) BOOL hasPluginId;
@property (retain, nonatomic) TRIPBStruct *schedulingPolicy;
@property (nonatomic) BOOL hasSchedulingPolicy;
@property (retain, nonatomic) TRIAssignment *customTargeting;
@property (nonatomic) BOOL hasCustomTargeting;
@property (retain, nonatomic) NSMutableArray *customTargetingKeysArray;
@property (readonly, nonatomic) unsigned long long customTargetingKeysArray_Count;
@property (retain, nonatomic) TRIAssignment *assignment;
@property (nonatomic) BOOL hasAssignment;
@property (retain, nonatomic) TRIPBTimestamp *endDate;
@property (nonatomic) BOOL hasEndDate;
@property (retain, nonatomic) TRIClientSelectedNamespace *selectedNamespace;
@property (nonatomic) BOOL hasSelectedNamespace;

+ (id)descriptor;

@end
