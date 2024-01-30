@interface _MSTempURL : NSURL

+ (BOOL)supportsSecureCoding;
+ (BOOL)_isInvalidPath:(id)a0;
+ (id)_resolvedTempDirectory;

- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
