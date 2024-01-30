@interface CoreODIEssentials.IdentityProofingStatus : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ activeConfigurations;
    void /* unknown type, empty encoding */ availability;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
