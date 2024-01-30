@interface CoreIDVShared.IdentityImageQuality : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ frontIDSettings;
    void /* unknown type, empty encoding */ backIDSettings;
    void /* unknown type, empty encoding */ selfieSettings;
    void /* unknown type, empty encoding */ livenessSettings;
    void /* unknown type, empty encoding */ exploration;
    void /* unknown type, empty encoding */ bufferSize;
    void /* unknown type, empty encoding */ videoFrameRate;
    void /* unknown type, empty encoding */ resizeDimensions;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
