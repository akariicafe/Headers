@class NSArray, NSData, NSString;

@interface NEHotspotEAPSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *clientTrustChainReference;
@property (copy) NSData *identityReference;
@property (copy) NSArray *trustedServerCertificateReferences;
@property (copy) NSArray *supportedEAPTypes;
@property (copy) NSString *username;
@property (copy) NSString *outerIdentity;
@property long long ttlsInnerAuthenticationType;
@property (copy) NSString *password;
@property (copy) NSArray *trustedServerNames;
@property (getter=isTLSClientCertificateRequired) BOOL tlsClientCertificateRequired;
@property long long preferredTLSVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)setIdentity:(struct __SecIdentity { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)setTrustedServerCertificates:(id)a0;

@end
