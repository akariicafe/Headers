@interface DIAttributeFooter : DIAttributeLabel <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setDefaultValue:(id)a0;
- (id)init;
- (id)defaultValue;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
