@class TRIPBEnumArray;

@interface TRIApproval : TRIPBMessage

@property (nonatomic) unsigned int radarId;
@property (nonatomic) BOOL hasRadarId;
@property (retain, nonatomic) TRIPBEnumArray *approvedDeploymentTypeArray;
@property (readonly, nonatomic) unsigned long long approvedDeploymentTypeArray_Count;

+ (id)descriptor;

@end
