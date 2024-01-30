@class NSMutableArray;

@interface TRIFactors : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *factorArray;
@property (readonly, nonatomic) unsigned long long factorArray_Count;

+ (id)descriptor;

@end
