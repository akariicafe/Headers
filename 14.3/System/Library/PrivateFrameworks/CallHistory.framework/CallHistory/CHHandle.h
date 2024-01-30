@class NSString;

@interface CHHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *normalizedValue;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *value;

+ (id)normalizedGenericHandleForValue:(id)a0;
+ (id)normalizedPhoneNumberHandleForValue:(id)a0 isoCountryCode:(id)a1;
+ (id)normalizedEmailAddressHandleForValue:(id)a0;
+ (long long)handleTypeForValue:(id)a0;

- (BOOL)isEqualToHandle:(id)a0;
- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 value:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 value:(id)a1 normalizedValue:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
