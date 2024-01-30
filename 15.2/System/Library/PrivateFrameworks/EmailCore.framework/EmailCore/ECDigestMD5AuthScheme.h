@interface ECDigestMD5AuthScheme : ECAuthScheme

@property (class, readonly) ECDigestMD5AuthScheme *digestMD5AuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)name;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
