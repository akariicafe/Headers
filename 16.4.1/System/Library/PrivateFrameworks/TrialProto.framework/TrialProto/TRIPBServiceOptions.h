@class NSMutableArray;

@interface TRIPBServiceOptions : TRIPBMessage

@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasDeprecated;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
