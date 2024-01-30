@interface ECDigestMD5AuthScheme : ECAuthScheme

@property (class, readonly) ECDigestMD5AuthScheme *digestMD5AuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)humanReadableName;
- (id)name;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
