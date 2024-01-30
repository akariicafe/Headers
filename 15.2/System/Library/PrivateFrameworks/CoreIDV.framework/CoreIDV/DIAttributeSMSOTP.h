@interface DIAttributeSMSOTP : DIAttributeText <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long validityInSeconds;

- (void)setDefaultValue:(id)a0;
- (id)defaultValue;
- (void)setCurrentValue:(id)a0;
- (id)submissionString;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)getCurrentValue;

@end
