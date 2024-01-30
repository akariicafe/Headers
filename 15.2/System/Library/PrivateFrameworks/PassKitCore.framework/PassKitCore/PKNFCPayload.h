@class NSString, NSData;

@interface PKNFCPayload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSData *encryptionPublicKeyData;
@property (nonatomic) BOOL requiresAuthentication;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToPKNFCPayload:(id)a0;
- (id)initWithNFCDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
