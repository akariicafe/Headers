@class NSString;

@interface SGSimpleNamedEmailAddress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *name;

+ (id)emailToNameDictionaryWithNamedEmailAddresses:(id)a0;
+ (id)namedEmailAddressWithCSPerson:(id)a0;
+ (id)namedEmailAddressWithFieldValue:(id)a0;
+ (id)namedEmailAddressesWithEmailToNameDictionary:(id)a0;
+ (id)namedEmailAddressesWithFieldValues:(id)a0;
+ (id)serializeAll:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)serialized;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)asCSPerson;
- (id)initWithName:(id)a0 emailAddress:(id)a1;
- (id)initWithNamedHandle:(id)a0;
- (BOOL)isEqualToNamedEmailAddress:(id)a0;

@end
