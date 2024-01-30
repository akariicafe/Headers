@interface NTKUpNextComplicationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long family;

+ (id)bezelConfigurationWithMaskImage:(id)a0 radius:(double)a1;
+ (id)graphicRectangularConfiguration;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFamily:(long long)a0;
- (id)_newPickerView;

@end
