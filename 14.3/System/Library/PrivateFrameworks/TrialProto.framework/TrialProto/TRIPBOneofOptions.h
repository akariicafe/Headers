@class NSMutableArray;

@interface TRIPBOneofOptions : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
