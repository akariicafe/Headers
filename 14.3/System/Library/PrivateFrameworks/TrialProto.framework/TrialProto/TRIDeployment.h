@class TRIApproval, NSString, TRIPBEnumArray, TRIPBTimestamp, TRIRollback, NSMutableDictionary, TRIDeploymentRequest, TRIAssignment;

@interface TRIDeployment : TRIPBMessage

@property (retain, nonatomic) TRIAssignment *assignment;
@property (nonatomic) BOOL hasAssignment;
@property (retain, nonatomic) TRIPBTimestamp *startDate;
@property (nonatomic) BOOL hasStartDate;
@property (retain, nonatomic) TRIPBTimestamp *endDate;
@property (nonatomic) BOOL hasEndDate;
@property (copy, nonatomic) NSString *cloudKitId;
@property (nonatomic) BOOL hasCloudKitId;
@property (retain, nonatomic) TRIPBTimestamp *deploymentTimestamp;
@property (nonatomic) BOOL hasDeploymentTimestamp;
@property (retain, nonatomic) TRIPBTimestamp *cloudKitExpirationDate;
@property (nonatomic) BOOL hasCloudKitExpirationDate;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) TRIPBEnumArray *deploymentTypeArray;
@property (readonly, nonatomic) unsigned long long deploymentTypeArray_Count;
@property (copy, nonatomic) NSString *deployedBy;
@property (nonatomic) BOOL hasDeployedBy;
@property (retain, nonatomic) TRIApproval *approval;
@property (nonatomic) BOOL hasApproval;
@property (retain, nonatomic) TRIRollback *rollback;
@property (nonatomic) BOOL hasRollback;
@property (retain, nonatomic) NSMutableDictionary *treatmentCloudKitId;
@property (readonly, nonatomic) unsigned long long treatmentCloudKitId_Count;
@property (retain, nonatomic) TRIPBEnumArray *previousDeploymentTypeArray;
@property (readonly, nonatomic) unsigned long long previousDeploymentTypeArray_Count;
@property (retain, nonatomic) TRIDeploymentRequest *deploymentRequest;
@property (nonatomic) BOOL hasDeploymentRequest;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) unsigned int externalId;
@property (nonatomic) BOOL hasExternalId;
@property (copy, nonatomic) NSString *deploymentName;
@property (nonatomic) BOOL hasDeploymentName;

+ (id)descriptor;

@end
