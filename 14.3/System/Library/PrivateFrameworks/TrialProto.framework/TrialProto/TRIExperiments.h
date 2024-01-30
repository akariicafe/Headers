@class NSMutableArray;

@interface TRIExperiments : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *experimentArray;
@property (readonly, nonatomic) unsigned long long experimentArray_Count;

+ (id)descriptor;

@end
