@class NSMutableArray;

@interface TRITreatments : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *treatmentArray;
@property (readonly, nonatomic) unsigned long long treatmentArray_Count;

+ (id)descriptor;

@end
