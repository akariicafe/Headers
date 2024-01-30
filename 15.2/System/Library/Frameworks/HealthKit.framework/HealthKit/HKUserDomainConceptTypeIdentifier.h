@class NSString;

@interface HKUserDomainConceptTypeIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long code;
@property (readonly, copy, nonatomic) NSString *schema;

+ (id)listUserDomainConceptIdentifier;
+ (id)medicalUserDomainConceptIdentifier;
+ (id)baseUserDomainConceptIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCode:(long long)a0 schema:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
