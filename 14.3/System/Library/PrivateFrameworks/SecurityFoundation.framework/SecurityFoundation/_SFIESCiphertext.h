@class NSData, _SFECPublicKey;

@interface _SFIESCiphertext : _SFCiphertext {
    id _iesCiphertextInternal;
}

@property (readonly) _SFECPublicKey *ephemeralSenderPublicKey;
@property (readonly) NSData *authenticationCode;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCiphertext:(id)a0 ephemeralSenderPublicKey:(id)a1 authenticationCode:(id)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
