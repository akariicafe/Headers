@interface ProximityReader.VASMerchantInternal : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ merchantIdentifier;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ sendURLOnly;
    void /* unknown type, empty encoding */ localizedName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
