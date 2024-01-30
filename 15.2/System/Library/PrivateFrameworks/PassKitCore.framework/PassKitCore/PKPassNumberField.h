@class NSString;

@interface PKPassNumberField : PKPassField

@property (nonatomic) long long numberStyle;
@property (copy, nonatomic) NSString *currencyCode;

+ (BOOL)supportsSecureCoding;

- (id)asDictionary;
- (id)asMutableDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)value;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
