@class NSString, NSMutableArray;

@interface TRITreatment : TRIPBMessage

@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (copy, nonatomic) NSString *treatmentName;
@property (nonatomic) BOOL hasTreatmentName;
@property (copy, nonatomic) NSString *treatmentDescription;
@property (nonatomic) BOOL hasTreatmentDescription;
@property (retain, nonatomic) NSMutableArray *factorLevelArray;
@property (readonly, nonatomic) unsigned long long factorLevelArray_Count;

+ (id)descriptor;

@end
