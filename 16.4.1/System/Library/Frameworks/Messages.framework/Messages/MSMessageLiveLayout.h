@class NSArray, MSMessageTemplateLayout;

@interface MSMessageLiveLayout : MSMessageLayout <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *requiredCapabilities;
@property (readonly, nonatomic) MSMessageTemplateLayout *alternateLayout;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_sanitizedCopy;
- (id)initWithAlternateLayout:(id)a0;

@end
