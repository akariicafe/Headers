@class TRIPBEnumArray;

@interface TRIDeploymentTypes : TRIPBMessage

@property (retain, nonatomic) TRIPBEnumArray *deploymentTypeArray;
@property (readonly, nonatomic) unsigned long long deploymentTypeArray_Count;

+ (id)descriptor;

@end
