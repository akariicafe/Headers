@class MSMessageTemplateLayout;

@interface MSMessageLiveLayout : MSMessageLayout <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MSMessageTemplateLayout *alternateLayout;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAlternateLayout:(id)a0;

@end
