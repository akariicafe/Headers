@class NSString;

@interface SGSimpleNamedEmailAddress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *name;

+ (id)serializeAll:(id)a0;
+ (id)namedEmailAddressWithCSPerson:(id)a0;
+ (id)namedEmailAddressWithFieldValue:(id)a0;
+ (id)namedEmailAddressesWithFieldValues:(id)a0;
+ (id)namedEmailAddressesWithEmailToNameDictionary:(id)a0;
+ (id)emailToNameDictionaryWithNamedEmailAddresses:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serialized;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)asCSPerson;
- (id)initWithName:(id)a0 emailAddress:(id)a1;
- (BOOL)isEqualToNamedEmailAddress:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
