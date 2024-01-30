@interface SFX509TrustPolicy : SFTrustPolicy <NSSecureCoding> {
    id _x509TrustPolicyInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
