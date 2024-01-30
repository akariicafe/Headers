@interface CoreODIEssentials.IdentityProofingConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ country;
    void /* unknown type, empty encoding */ targetDevice;
    void /* unknown type, empty encoding */ actionStatus;
    void /* unknown type, empty encoding */ credentialIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
