@class NSString, NSMutableArray;

@interface TRIPlanOutAssignmentLanguage : TRIPBMessage

@property (copy, nonatomic) NSString *yaml;
@property (nonatomic) BOOL hasYaml;
@property (retain, nonatomic) NSMutableArray *treatmentIdArray;
@property (readonly, nonatomic) unsigned long long treatmentIdArray_Count;

+ (id)descriptor;

@end
