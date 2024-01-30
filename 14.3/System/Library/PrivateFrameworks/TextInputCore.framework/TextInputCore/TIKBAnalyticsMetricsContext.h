@class NSString, NSDictionary;

@interface TIKBAnalyticsMetricsContext : TIAnalyticsMetricsContext

@property (readonly, nonatomic) NSString *layoutName;
@property (readonly, nonatomic) unsigned char keyboardType;
@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) NSDictionary *testingParameters;

+ (BOOL)supportsSecureCoding;
+ (id)keyboardTypeEnumToString:(unsigned char)a0;
+ (unsigned char)keyboardTypeStringToEnum:(id)a0;
+ (id)userInterfaceIdiomToString:(long long)a0;
+ (long long)userInterfaceIdiomStringToEnum:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeyboardState:(id)a0;
- (id)initWithInputLanguage:(id)a0 inputRegion:(id)a1 layoutName:(id)a2 keyboardType:(unsigned char)a3 userInterfaceIdiom:(long long)a4;
- (id)initWithInputLanguage:(id)a0 inputRegion:(id)a1 layoutName:(id)a2 keyboardType:(unsigned char)a3 userInterfaceIdiom:(long long)a4 testingParameters:(id)a5;
- (id)initWithKeyboardState:(id)a0 testingParameters:(id)a1;

@end
