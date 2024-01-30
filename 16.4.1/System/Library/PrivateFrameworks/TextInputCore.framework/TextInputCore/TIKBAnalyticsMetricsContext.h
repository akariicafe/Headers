@class NSString, NSDictionary;

@interface TIKBAnalyticsMetricsContext : TIAnalyticsMetricsContext

@property (readonly, nonatomic) NSString *inputVariant;
@property (readonly, nonatomic) NSString *secondaryLanguage;
@property (readonly, nonatomic) NSString *secondaryRegion;
@property (readonly, nonatomic) NSString *layoutName;
@property (readonly, nonatomic) unsigned char keyboardType;
@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) NSDictionary *testingParameters;

+ (unsigned char)keyboardTypeStringToEnum:(id)a0;
+ (long long)userInterfaceIdiomStringToEnum:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)keyboardTypeEnumToString:(unsigned char)a0;
+ (id)userInterfaceIdiomToString:(long long)a0;

- (id)initWithInputLanguage:(id)a0 inputRegion:(id)a1 layoutName:(id)a2 keyboardType:(unsigned char)a3 userInterfaceIdiom:(long long)a4;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInputLanguage:(id)a0 inputRegion:(id)a1 inputVariant:(id)a2 secondaryLanguage:(id)a3 secondaryRegion:(id)a4 layoutName:(id)a5 keyboardType:(unsigned char)a6 userInterfaceIdiom:(long long)a7 testingParameters:(id)a8;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeyboardState:(id)a0 activeInputModes:(id)a1 testingParameters:(id)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithInputLanguage:(id)a0 inputRegion:(id)a1 layoutName:(id)a2 keyboardType:(unsigned char)a3 userInterfaceIdiom:(long long)a4 testingParameters:(id)a5;

@end
