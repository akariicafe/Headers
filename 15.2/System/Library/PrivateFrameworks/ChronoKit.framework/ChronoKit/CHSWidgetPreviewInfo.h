@class NSString;

@interface CHSWidgetPreviewInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ metricsSpecification;
    void /* unknown type, empty encoding */ environment;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
