@class NSString, NSData, NSArray;

@interface DCCredentialCryptoKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSData *publicKeyIdentifier;
@property (retain) NSData *publicKeyCOSEKey;
@property unsigned long long keyType;
@property unsigned long long keyUsage;
@property (retain) NSArray *attestation;
@property (retain) NSData *casdAttestation;
@property (retain) NSData *casdSignature;
@property (retain) NSData *keyAuthorization;
@property (retain) NSArray *kskAttestation;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 publicKeyIdentifier:(id)a1 publicKeyCOSEKey:(id)a2 keyType:(unsigned long long)a3 keyUsage:(unsigned long long)a4 attestation:(id)a5;
- (id)initWithIdentifier:(id)a0 publicKeyIdentifier:(id)a1 publicKeyCOSEKey:(id)a2 keyType:(unsigned long long)a3 keyUsage:(unsigned long long)a4 attestation:(id)a5 keyAuthorization:(id)a6 kskAttestation:(id)a7;
- (id)initWithIdentifier:(id)a0 publicKeyIdentifier:(id)a1 publicKeyCOSEKey:(id)a2 keyType:(unsigned long long)a3 keyUsage:(unsigned long long)a4 casdSignature:(id)a5 casdAttestation:(id)a6 keyAuthorization:(id)a7 kskAttestation:(id)a8;

@end
