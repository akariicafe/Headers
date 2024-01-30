@interface CoreIDVShared.IdentityImageQuality : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ frontIDSettings;
    void /* unknown type, empty encoding */ backIDSettings;
    void /* unknown type, empty encoding */ selfieSettings;
    void /* unknown type, empty encoding */ exploration;
    void /* unknown type, empty encoding */ resizeDimensions;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
