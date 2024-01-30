@interface CHSWidgetPreviewInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ metricsSpecification;
    void /* unknown type, empty encoding */ environment;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
