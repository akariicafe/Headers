@class MSMessageTemplateLayout;

@interface MSMessageLiveLayout : MSMessageLayout <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MSMessageTemplateLayout *alternateLayout;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_sanitizedCopy;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAlternateLayout:(id)a0;

@end
