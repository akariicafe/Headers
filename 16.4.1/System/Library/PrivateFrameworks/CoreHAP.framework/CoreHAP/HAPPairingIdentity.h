@class NSString;

@interface HAPPairingIdentity : HMFPairingIdentity

@property (readonly, copy, nonatomic) NSString *controllerKeyIdentifier;
@property (readonly, nonatomic) unsigned long long permissions;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 privateKey:(id)a2;
- (id)initWithIdentifier:(id)a0 controllerKeyIdentifier:(id)a1 publicKey:(id)a2 privateKey:(id)a3 permissions:(unsigned long long)a4;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 privateKey:(id)a2 permissions:(unsigned long long)a3;
- (id)initWithKeychainItem:(id)a0;
- (BOOL)isStrictlyEqual:(id)a0;

@end
