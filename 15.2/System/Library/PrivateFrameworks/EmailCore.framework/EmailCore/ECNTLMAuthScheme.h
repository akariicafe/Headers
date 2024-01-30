@interface ECNTLMAuthScheme : ECAuthScheme

@property (class, readonly) ECNTLMAuthScheme *ntlmAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)name;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
