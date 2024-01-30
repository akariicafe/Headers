@class NSString;

@interface TSCERemoteDataSpecifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long hashVal;
@property (readonly, nonatomic) unsigned short functionIndex;
@property (readonly, nonatomic) NSString *symbol;
@property (readonly, nonatomic) long long attribute;
@property (readonly, nonatomic) long long year;
@property (readonly, nonatomic) long long month;
@property (readonly, nonatomic) long long day;
@property (readonly, nonatomic) BOOL isCold;
@property (readonly, nonatomic) NSString *functionName;
@property (readonly, nonatomic) BOOL isCurrency;
@property (readonly, nonatomic) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } invalidAttributeErrorValue;
@property (readonly, nonatomic) struct TSCEValue { union { struct { struct { unsigned long long x0[2]; } x0; unsigned char x1[24]; unsigned short x2; BOOL x3; } x0; unsigned long long x1[9]; } x0; unsigned char x1; } invalidSymbolErrorValue;

+ (id)specifierFromArchive:(const void *)a0;
+ (id)specifierWithFunctionIndex:(unsigned short)a0 symbol:(id)a1 attribute:(long long)a2;
+ (id)specifierWithFunctionIndex:(unsigned short)a0 symbol:(id)a1 attribute:(long long)a2 year:(long long)a3 month:(long long)a4 day:(long long)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)encodeToArchive:(void *)a0;
- (id)initFromArchive:(const void *)a0;
- (id)specifierByChangingAttributeTo:(long long)a0;
- (BOOL)hasDateEqualToDate:(id)a0;
- (id)initWithFunctionIndex:(unsigned short)a0 symbol:(id)a1 attribute:(long long)a2 year:(long long)a3 month:(long long)a4 day:(long long)a5;
- (double)p_timeInterval;

@end
