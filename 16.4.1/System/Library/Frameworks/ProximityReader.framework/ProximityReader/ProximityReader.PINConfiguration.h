@interface ProximityReader.PINConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ digest;
    void /* unknown type, empty encoding */ allowPINBypass;
    void /* unknown type, empty encoding */ privacyLock;
    void /* unknown type, empty encoding */ merchantName;
    void /* unknown type, empty encoding */ amount;
    void /* unknown type, empty encoding */ currencyCode;
    void /* unknown type, empty encoding */ countryCode;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
