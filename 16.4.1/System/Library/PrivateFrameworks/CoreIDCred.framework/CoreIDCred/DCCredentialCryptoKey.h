@class NSString, NSData, NSArray;

@interface DCCredentialCryptoKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSData *publicKey;
@property (retain) NSData *publicKeyIdentifier;
@property (retain) NSData *publicKeyCOSEKey;
@property unsigned long long keyType;
@property unsigned long long keyUsage;
@property (retain) NSArray *attestation;
@property (retain) NSData *casdAttestation;
@property (retain) NSData *casdSignature;
@property (retain) NSData *progenitorKeyAttestation;
@property (retain) NSData *keyAuthorization;
@property (retain) NSArray *kskAttestation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 attestation:(id)a6 keyAuthorization:(id)a7 kskAttestation:(id)a8;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 attestation:(id)a6;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 casdSignature:(id)a6 casdAttestation:(id)a7 keyAuthorization:(id)a8 kskAttestation:(id)a9;
- (id)initWithIdentifier:(id)a0 publicKey:(id)a1 publicKeyIdentifier:(id)a2 publicKeyCOSEKey:(id)a3 keyType:(unsigned long long)a4 keyUsage:(unsigned long long)a5 progenitorKeyAttestation:(id)a6 casdAttestation:(id)a7 keyAuthorization:(id)a8 kskAttestation:(id)a9;

@end
