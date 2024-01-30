@interface ProximityReader.PINData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isPINBypass;
    void /* unknown type, empty encoding */ pinBlockBase64;
    void /* unknown type, empty encoding */ pinKekId;
    void /* unknown type, empty encoding */ seAttestationBase64;
    void /* unknown type, empty encoding */ casdCertificateHex;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
