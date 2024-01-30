@interface CoreIDVShared.IdentityProofingStatus : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ activeConfigurations;
    void /* unknown type, empty encoding */ availability;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
