@interface NEVPNIKEv2SecurityAssociationParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long encryptionAlgorithm;
@property long long integrityAlgorithm;
@property long long diffieHellmanGroup;
@property int lifetimeMinutes;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
