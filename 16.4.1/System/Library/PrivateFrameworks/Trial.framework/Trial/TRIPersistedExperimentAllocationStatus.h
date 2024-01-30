@class TRIPersistedAllocationCommon, NSString, NSMutableArray;

@interface TRIPersistedExperimentAllocationStatus : TRIPBMessage

@property (retain, nonatomic) TRIPersistedAllocationCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSMutableArray *namespaceArray;
@property (readonly, nonatomic) unsigned long long namespaceArray_Count;

+ (id)descriptor;

@end
