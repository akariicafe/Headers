@interface ECPlainAuthScheme : ECAuthScheme

@property (class, readonly) ECPlainAuthScheme *plainAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)humanReadableName;
- (id)name;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
