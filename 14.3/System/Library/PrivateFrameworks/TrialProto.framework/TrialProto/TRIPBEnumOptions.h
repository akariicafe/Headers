@class NSMutableArray;

@interface TRIPBEnumOptions : TRIPBMessage

@property (nonatomic) BOOL allowAlias;
@property (nonatomic) BOOL hasAllowAlias;
@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasDeprecated;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
