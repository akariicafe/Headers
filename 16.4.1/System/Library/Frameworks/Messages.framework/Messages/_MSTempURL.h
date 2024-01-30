@interface _MSTempURL : NSURL

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isInvalidPath:(id)a0;
+ (id)_resolvedTempDirectory;

- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (void)dealloc;

@end
