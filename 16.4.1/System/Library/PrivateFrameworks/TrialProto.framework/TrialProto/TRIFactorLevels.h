@class NSMutableArray;

@interface TRIFactorLevels : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *factorLevelArray;
@property (readonly, nonatomic) unsigned long long factorLevelArray_Count;

+ (id)descriptor;

@end
