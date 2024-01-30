@class NSString;

@interface DIAttributeCustom : DIAttributeText <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;

- (void)setDefaultValue:(id)a0;
- (id)defaultValue;
- (void)setCurrentValue:(id)a0;
- (id)submissionString;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)getCurrentValue;

@end
