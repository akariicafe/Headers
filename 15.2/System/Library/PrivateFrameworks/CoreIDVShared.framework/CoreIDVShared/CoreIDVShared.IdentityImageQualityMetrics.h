@interface CoreIDVShared.IdentityImageQualityMetrics : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ inlineMetrics;
    void /* unknown type, empty encoding */ captureMetrics;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
