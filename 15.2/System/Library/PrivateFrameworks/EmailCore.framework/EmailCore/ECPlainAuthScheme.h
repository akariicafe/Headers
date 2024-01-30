@interface ECPlainAuthScheme : ECAuthScheme

@property (class, readonly) ECPlainAuthScheme *plainAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)name;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
