@class NSString, NSArray, LNEntityIdentifier;

@interface LNEntity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *managedAccountIdentifier;
@property (readonly, nonatomic, getter=isTransient) BOOL transient;
@property (readonly, copy, nonatomic) LNEntityIdentifier *identifier;
@property (readonly, copy, nonatomic) NSArray *properties;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 properties:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 managedAccountIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 properties:(id)a1 managedAccountIdentifier:(id)a2;
- (id)initWithTransient:(BOOL)a0 identifier:(id)a1 properties:(id)a2 managedAccountIdentifier:(id)a3;

@end
