@interface HAPPairingIdentity : HMFPairingIdentity

@property (readonly, nonatomic) unsigned long long permissions;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 privateKey:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 privateKey:(id)a2 permissions:(unsigned long long)a3;

@end
