@interface CoreIDVShared.IdentityImageQualityMetrics : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ inlineMetrics;
    void /* unknown type, empty encoding */ captureMetrics;
    void /* unknown type, empty encoding */ videoMetrics;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
