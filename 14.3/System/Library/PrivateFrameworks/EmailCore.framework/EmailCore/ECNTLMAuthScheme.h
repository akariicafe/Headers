@interface ECNTLMAuthScheme : ECAuthScheme

@property (class, readonly) ECNTLMAuthScheme *ntlmAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)humanReadableName;
- (id)name;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
