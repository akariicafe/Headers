@interface WidgetKit.DescriptorFetchResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ widgetDescriptors;
    void /* unknown type, empty encoding */ activityDescriptors;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
