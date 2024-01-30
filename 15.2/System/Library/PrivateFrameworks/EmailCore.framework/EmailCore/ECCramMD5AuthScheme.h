@interface ECCramMD5AuthScheme : ECAuthScheme

@property (class, readonly) ECCramMD5AuthScheme *cramMD5AuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)name;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
