@class NSString;

@interface PKPassNumberField : PKPassField

@property (nonatomic) long long numberStyle;
@property (copy, nonatomic) NSString *currencyCode;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (id)value;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
