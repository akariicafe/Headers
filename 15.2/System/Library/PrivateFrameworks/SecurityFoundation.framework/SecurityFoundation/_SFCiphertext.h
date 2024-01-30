@class NSData;

@interface _SFCiphertext : NSObject <NSCopying, NSSecureCoding> {
    id _ciphertextInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *ciphertext;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCiphertext:(id)a0;

@end
