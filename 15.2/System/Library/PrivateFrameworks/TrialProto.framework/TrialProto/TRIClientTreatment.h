@class NSString, NSMutableArray;

@interface TRIClientTreatment : TRIPBMessage

@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSMutableArray *factorLevelArray;
@property (readonly, nonatomic) unsigned long long factorLevelArray_Count;

+ (id)descriptor;

@end
