@interface NTKUpNextComplicationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long family;

+ (id)graphicRectangularConfiguration;
+ (id)bezelConfigurationWithMaskImage:(id)a0 radius:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFamily:(long long)a0;

@end
