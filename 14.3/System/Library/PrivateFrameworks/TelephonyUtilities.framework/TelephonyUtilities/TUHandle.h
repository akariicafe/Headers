@class NSString, NSDictionary;

@interface TUHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasSetISOCountryCode;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (readonly, copy, nonatomic) NSString *normalizedValue;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *value;

+ (id)normalizedGenericHandleForValue:(id)a0;
+ (id)stringForType:(long long)a0;
+ (id)handleWithPersonHandle:(id)a0;
+ (id)normalizedPhoneNumberHandleForValue:(id)a0 isoCountryCode:(id)a1;
+ (id)normalizedEmailAddressHandleForValue:(id)a0;
+ (id)normalizedHandleWithDestinationID:(id)a0;
+ (id)handleWithDestinationID:(id)a0;
+ (id)handleWithDictionaryRepresentation:(id)a0;
+ (id)handleForCHRecentCall:(id)a0;
+ (id)handlesForCHRecentCall:(id)a0;

- (BOOL)isEqualToHandle:(id)a0;
- (id)initWithHandle:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 value:(id)a1;
- (BOOL)isEquivalentToHandle:(id)a0;
- (unsigned long long)hash;
- (id)initWithDestinationID:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isCanonicallyEqualToHandle:(id)a0 isoCountryCode:(id)a1;
- (id)description;
- (id)personHandle;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 value:(id)a1 normalizedValue:(id)a2;
- (BOOL)isValidForISOCountryCode:(id)a0;
- (id)canonicalHandleForISOCountryCode:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
