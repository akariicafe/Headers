@class NSMutableArray;

@interface TRIRolloutAssignmentLanguage : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *assignmentArray;
@property (readonly, nonatomic) unsigned long long assignmentArray_Count;

+ (id)descriptor;

@end
