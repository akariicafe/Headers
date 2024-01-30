@interface DIAttributeCustom : DIAttributeText <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setDefaultValue:(id)a0;
- (id)defaultValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setIdentifier:(id)a0;
- (id)init;
- (void)setCurrentValue:(id)a0;
- (id)submissionString;
- (id)getCurrentValue;

@end
