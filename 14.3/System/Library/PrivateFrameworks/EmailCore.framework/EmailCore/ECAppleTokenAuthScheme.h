@interface ECAppleTokenAuthScheme : ECAuthScheme

@property (class, readonly) ECAppleTokenAuthScheme *appleTokenAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (BOOL)requiresUsername;
- (BOOL)requiresPassword;
- (id)humanReadableName;
- (id)name;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
