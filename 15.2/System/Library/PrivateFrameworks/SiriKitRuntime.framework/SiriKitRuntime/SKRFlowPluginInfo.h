@class NSString;

@interface SKRFlowPluginInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ supportsOnDeviceNL;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
