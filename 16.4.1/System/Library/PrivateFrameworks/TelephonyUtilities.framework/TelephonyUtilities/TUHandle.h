@class NSString, NSDictionary;

@interface TUHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasSetISOCountryCode;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (readonly, copy, nonatomic) NSString *normalizedValue;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *siriDisplayName;
@property (readonly, nonatomic, getter=shouldHideContact) BOOL shouldHideContact;

+ (id)normalizedGenericHandleForValue:(id)a0;
+ (id)handleWithDictionaryRepresentation:(id)a0;
+ (id)handlesForCHRecentCall:(id)a0 validHandlesOnly:(BOOL)a1;
+ (id)handleWithDestinationID:(id)a0;
+ (id)normalizedPhoneNumberHandleForValue:(id)a0 isoCountryCode:(id)a1;
+ (id)handlesForCHRecentCall:(id)a0;
+ (id)normalizedHandleWithDestinationID:(id)a0;
+ (id)handleForCHRecentCall:(id)a0 validHandlesOnly:(BOOL)a1;
+ (id)stringForType:(long long)a0;
+ (long long)handleTypeForCHHandle:(id)a0;
+ (id)handleWithPerson:(id)a0;
+ (id)handleWithPersonHandle:(id)a0;
+ (id)handleForCHRecentCall:(id)a0;
+ (id)normalizedEmailAddressHandleForValue:(id)a0;

- (id)initWithHandle:(id)a0;
- (id)personHandle;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 value:(id)a1;
- (id)canonicalHandleForISOCountryCode:(id)a0;
- (id)initWithDestinationID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 value:(id)a1 siriDisplayName:(id)a2;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValidForISOCountryCode:(id)a0;
- (unsigned long long)hash;
- (BOOL)isCanonicallyEqualToHandle:(id)a0 isoCountryCode:(id)a1;
- (id)init;
- (BOOL)isEquivalentToHandle:(id)a0;
- (id)description;
- (BOOL)isEqualToHandle:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 value:(id)a1 normalizedValue:(id)a2;

@end
