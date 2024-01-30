@interface NSInflectionRule : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL canInflectPreferredLocalization;
@property (class, readonly) NSInflectionRule *automaticRule;
@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)canInflectLanguage:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
