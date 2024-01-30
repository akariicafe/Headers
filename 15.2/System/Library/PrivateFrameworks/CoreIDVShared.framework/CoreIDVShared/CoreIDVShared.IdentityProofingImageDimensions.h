@interface CoreIDVShared.IdentityProofingImageDimensions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ idFront;
    void /* unknown type, empty encoding */ idBack;
    void /* unknown type, empty encoding */ selfie;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
