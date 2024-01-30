@interface ECCramMD5AuthScheme : ECAuthScheme

@property (class, readonly) ECCramMD5AuthScheme *cramMD5AuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)humanReadableName;
- (id)name;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
