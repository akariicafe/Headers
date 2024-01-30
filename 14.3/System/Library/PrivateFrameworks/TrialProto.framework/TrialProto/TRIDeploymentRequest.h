@class NSString, TRIPBTimestamp, TRIApproval, TRIPBEnumArray;

@interface TRIDeploymentRequest : TRIPBMessage

@property (retain, nonatomic) TRIPBTimestamp *requestedTimestamp;
@property (nonatomic) BOOL hasRequestedTimestamp;
@property (copy, nonatomic) NSString *requestedBy;
@property (nonatomic) BOOL hasRequestedBy;
@property (retain, nonatomic) TRIApproval *programOfficeApproval;
@property (nonatomic) BOOL hasProgramOfficeApproval;
@property (retain, nonatomic) TRIPBEnumArray *deploymentTypeArray;
@property (readonly, nonatomic) unsigned long long deploymentTypeArray_Count;

+ (id)descriptor;

@end
