@class NSString, TRIPBTimestamp, TRIAssignment;

@interface TRIClientExperiment : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) int projectId;
@property (nonatomic) BOOL hasProjectId;
@property (retain, nonatomic) TRIPBTimestamp *startDate;
@property (nonatomic) BOOL hasStartDate;
@property (retain, nonatomic) TRIPBTimestamp *endDate;
@property (nonatomic) BOOL hasEndDate;
@property (retain, nonatomic) TRIAssignment *assignment;
@property (nonatomic) BOOL hasAssignment;
@property (nonatomic) unsigned int seed;
@property (nonatomic) BOOL hasSeed;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (copy, nonatomic) NSString *projectName;
@property (nonatomic) BOOL hasProjectName;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int priority;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned int maxFailures;
@property (nonatomic) BOOL hasMaxFailures;
@property (nonatomic) long long delaySeconds;
@property (nonatomic) BOOL hasDelaySeconds;
@property (copy, nonatomic) NSString *assignmentEndpoint;
@property (nonatomic) BOOL hasAssignmentEndpoint;

+ (id)descriptor;

@end
