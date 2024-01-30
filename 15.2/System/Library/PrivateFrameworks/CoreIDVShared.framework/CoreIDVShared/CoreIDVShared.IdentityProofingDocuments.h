@interface CoreIDVShared.IdentityProofingDocuments : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ frontID;
    void /* unknown type, empty encoding */ backID;
    void /* unknown type, empty encoding */ selfie;
    void /* unknown type, empty encoding */ liveness;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
