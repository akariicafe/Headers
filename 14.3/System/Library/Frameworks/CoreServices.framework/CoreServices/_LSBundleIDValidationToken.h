@interface _LSBundleIDValidationToken : _LSValidationToken

+ (BOOL)supportsSecureCoding;
+ (BOOL)isToken:(id)a0 correctForBundleIdentifier:(id)a1 connection:(id)a2;

- (id)initWithBundleIdentifier:(id)a0;

@end
