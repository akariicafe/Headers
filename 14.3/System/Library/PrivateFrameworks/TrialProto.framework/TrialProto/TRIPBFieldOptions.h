@class NSMutableArray;

@interface TRIPBFieldOptions : TRIPBMessage

@property (nonatomic) int ctype;
@property (nonatomic) BOOL hasCtype;
@property (nonatomic) BOOL packed;
@property (nonatomic) BOOL hasPacked;
@property (nonatomic) int jstype;
@property (nonatomic) BOOL hasJstype;
@property (nonatomic) BOOL lazy;
@property (nonatomic) BOOL hasLazy;
@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasDeprecated;
@property (nonatomic) BOOL weak;
@property (nonatomic) BOOL hasWeak;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
