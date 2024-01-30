@class NSString, EAEmailAddressSet;

@interface EMVIP : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) EAEmailAddressSet *emailAddresses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)_commonInitWithIdentifier:(id)a0 name:(id)a1 emailAddresses:(id)a2 displayName:(id)a3;
- (BOOL)_isEqualToVIP:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 emailAddresses:(id)a2;

@end
